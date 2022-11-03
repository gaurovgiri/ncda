#include "alert.h"
#include "screen.h"
#include <string.h>
#include <ncurses.h>
#include <malloc.h>



void alert(const char *file)
{
    int maxx, maxy;
    getmaxyx(stdscr, maxy, maxx);
    WINDOW *alertScreen = newwin(ALERT_ROW, ALERT_COL, maxy / 4, maxx / 4);
    box(alertScreen,0,0);
    char *alertText = (char *)malloc(sizeof(char)*strlen(file));
    sprintf(alertText,"%s is a file",file);
    wcenter(alertScreen, ALERT_ROW / 2, alertText);
    getch();
    delwin(alertScreen);
}