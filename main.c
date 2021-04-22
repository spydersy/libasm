/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 16:49:12 by abelarif          #+#    #+#             */
/*   Updated: 2021/04/22 10:52:27 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

// void        test_ft_read(int fildes, void *buf, size_t nbyte)
// {
    
// }

// void        test_ft_strcmp(void)
// {
//     const char *s2 = "\xff\xff";
//     const char *s1 = "\xff";
//     printf("SYS : %d\n",    strcmp(s1, s2));
//     printf("USR : %d\n", ft_strcmp(s1, s2));    
// }


// void        test_ft_strdup(const char *s1)
// {}

// void        test_ft_write(int fildes, const void *buf, size_t nbyte)
// {
//     int     sys, usr;

//     sys = 0;
//     usr = 0;
    
//     usr = ft_write(fildes, buf, nbyte);
//     printf("\nUSR : %d\n", usr);
//     printf("USR_ERRNO : %d\n", errno);
    
//     printf("*****************************************************************************************\n");
    
//     sys = write(fildes, buf, nbyte);
//     printf("\nSYS : %d\n", sys);
//     printf("SYS_ERRNO : %d\n", errno);
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


// void        test_ft_strlen(const char *s)
// {
//     printf("SYS : %lu\n", strlen(s));
//     printf("USR : %zu\n", ft_strlen(s));
// }

void    test_ft_strdup(char *str0)
{
    char *s1;

    s1 = ft_strdup(str0);
    printf(">>%s<<\n", s1);
}

int     main()
{
    char    *str0 = "str";
    // test_ft_read(0, str0, "5");
    // test_ft_strcmp();
    // test_ft_strcpy();
    test_ft_strdup(str0);
    // test_ft_strlen("verrbw\0teenrewthqe\\");
    // test_ft_write(15, str0, 16);
    return (0);
}