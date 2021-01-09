#include <string.h>
#include <stdio.h>

int         main()
{
    char    src[] = "test strcpy";
    char    dst[] = "xxx     v  ";

    char *ret;
    printf("0 : >>%s<<\n", dst);
    ret = strcpy(dst, src);
    printf("1 : >>%s<<\n", dst);
    return (0);
}