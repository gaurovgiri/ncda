#include "dirList.h"
#include <sys/stat.h>
#include <sys/types.h>

int isDir(const char *dir)
{
    struct stat path_stat;
    stat(dir,&path_stat);
    return S_ISREG(path_stat.st_mode)?0:1;
}
struct directoryList dirList(const char *dir)
{
    struct directoryList list;
    list.no = scandir(dir, &list.nameList, 0, alphasort);
    return list;
}
