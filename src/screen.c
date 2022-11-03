#include "screen.h"
#include <string.h>

void wcenter(WINDOW *win, int row, const char *title)
{
    int len, indent , y, width;
    getmaxyx(win, y, width);
    len = strlen(title);
    indent = width - len;
    indent /= 2;
    mvwaddstr(win,row,indent,title);
    wrefresh(win);
}