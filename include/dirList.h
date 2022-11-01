#ifndef DIRLIST
#define DIRLIST

#include <dirent.h>

struct directoryList
{
    struct dirent **nameList;
    int no;
};

struct directoryList dirList(const char *);

#endif // DIRLIST