#include "menu.h"
#include <ncurses.h>

void menu(struct directoryList list, int index)
{
    clear();
    for (int i = 0; i < list.no; i++)
    {
        if (i == index)
        {
            attron(A_REVERSE);
            printw("%s\n", list.nameList[i]->d_name);
            attroff(A_REVERSE);
        }
        else
        {
            printw("%s\n",list.nameList[i]->d_name);
        }
    }
}