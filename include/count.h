#ifndef COUNT
#define COUNT

#include <sys/stat.h>

static unsigned int total = 0;

struct count
{
    float totalBytes;
    char unit[3];
};

int countFn(const char *, const struct stat *, int);

float countSize(const char *);

#endif // COUNT