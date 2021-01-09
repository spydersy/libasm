#include "libasm.h"


// void        test_ft_read(int fildes, void *buf, size_t nbyte)
// {}

void        test_ft_strcmp(void)
{
    const char *s1 = "Q";
    const char *s2 = "s";
    printf("SYS : %d\n",    strcmp(s1, s2));
    printf("USR : %d\n", ft_strcmp(s1, s2));    
}


// void        test_ft_strdup(const char *s1)
// {}

// void        test_ft_write(int fildes, const void *buf, size_t nbyte)
// {}

int     main()
{


    // start();
    // test_ft_read(0, str0, "5");
    test_ft_strcmp();
    // test_ft_strcpy();
    // test_ft_strdup(str0);
    // test_ft_strlen("");
    // test_ft_write(1, str0, 12);

    return (0);
}

// void        test_ft_strlen(const char *s)
// {
    // printf("SYS : %lu\n", strlen(s));
    // printf("USR : %zu\n", ft_strlen(s));
// }

// void        test_ft_strcpy(void)
// {
//     char    dst0[] = "acbe0123456789";
//     char    dst1[] = "acbe0123456789";
//     char    src0[] = "1325     ";
//     char    src1[] = "1325     ";

//     printf("SYS : >>%s<<\n",    strcpy(dst0, src0));
//     printf("USR : >>%s<<\n", ft_strcpy(dst1, src1));
// }
