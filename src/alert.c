#include "alert.h"
#include <ncurses.h>

void alert(const char *file)
{
    WINDOW *alertScreen = newwin(15,20,(stdscr->_maxy+1)/4,(stdscr->_maxy+1)/4);
    
    
    
}