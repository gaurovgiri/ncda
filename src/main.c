#include "dirList.h"
#include "menu.h"
#include <ncurses.h>
#include <unistd.h>
#include "alert.h"

int main()
{
    char cwd[PATH_MAX];
    struct directoryList list;
    int index = 0, ch;
    if (getcwd(cwd, sizeof(cwd)) != NULL)
    {
        list = dirList(cwd);
    }
    else
    {
        perror("getcwd() error");
        return 1;
    }

    initscr();
    keypad(stdscr, TRUE);
    curs_set(0);
    menu(list, index);
    while ((ch = getch()) != 'q')
    {
        switch (ch)
        {
        case KEY_DOWN:
            index++;
            if (index >= list.no)
            {
                index = 0;
            }
            break;

        case KEY_UP:
            index--;
            if (index < 0)
            {
                index = list.no - 1;
            }
            break;

        case '\n':
            if (isDir(list.nameList[index]->d_name))
            {
                chdir(list.nameList[index]->d_name);
                getcwd(cwd,sizeof(cwd));
                list = dirList(cwd);
                index = 0;
            }
            else
            {
                alert(list.nameList[index]->d_name);
            }
            break;

        default:
            break;
        }
        refresh();
        menu(list, index);
    }
    endwin();
}