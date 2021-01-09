#include "libasm.h"
#include <stdio.h>

// void        test_ft_read(int fildes, void *buf, size_t nbyte)
// {}

// void        test_ft_strcmp(const char *s1, const char *s2)
// {}

// void        test_ft_strcpy(char *dst, const char *src)
// {}

// void        test_ft_strdup(const char *s1)
// {}

// void        test_ft_write(int fildes, const void *buf, size_t nbyte)
// {}

void        test_ft_strlen(const char *s)
{
    printf("SYS : %lu\n", strlen(s));
    printf("USR : %zu\n", ft_strlen(s));
}

int     main()
{
    // char    *str0;
    // char    *str1;

    // start();
    // test_ft_read(0, str0, "5");
    // test_ft_strcmp(str0, str1);
    // test_ft_strcpy(str0, str1);
    // test_ft_strdup(str0);
    // test_ft_strlen("");
    // test_ft_write(1, str0, 12);

    return (0);
}