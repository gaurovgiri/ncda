#include "menu.h"
#include <ncurses.h>
#include "dirList.h"
#include "count.h"

void menu(struct directoryList list, int index)
{
    clear();
    for (int i = 0; i < list.no; i++)
    {
        if (i == index)
        {
            attron(A_REVERSE);
            printw("%s\t", list.nameList[i]->d_name);
            printw("%fk \n",countSize(list.nameList[i]->d_name)/1024.0);
            attroff(A_REVERSE);
        }
        else
        {
            printw("%s\t",list.nameList[i]->d_name);
            printw("%fk \n",countSize(list.nameList[i]->d_name)/1024.0);
        }
    }
}