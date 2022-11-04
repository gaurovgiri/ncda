#include "count.h"
#include <ftw.h>
#include "dirList.h"
#include <unistd.h>


int countFn(const char *fpath, const struct stat *sb, int typeflag)
{
    total += sb->st_size;
    return 0;
}

float countSize(const char *fpath)
{
    total = 0;
    if (!fpath || access(fpath, R_OK))
    {
        return 1;
    }
    if (ftw(fpath, &countFn, 1))
    {
        perror("ftw");
        return 2;
    }
    return (float)total;
}