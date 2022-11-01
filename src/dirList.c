#include "dirList.h"

struct directoryList dirList(const char *dir)
{
    struct directoryList list;
    list.no=scandir(dir,&list.nameList,0,alphasort);
    return list;
}
