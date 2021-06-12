/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 16:49:12 by abelarif          #+#    #+#             */
/*   Updated: 2021/06/12 18:48:04 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"


#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include "libasm.h"

void    read_test(void)
{
    size_t      nbyte = 50;

    {
        int         usr;
        char        *usrbuf = malloc(sizeof(char) * 500);
        int         fd = open("main.c", O_RDONLY);
        usr = ft_read(0, usrbuf, nbyte);
        printf("USR : [%d], [%s]\n", usr, usrbuf);    
    }
    {
        int         sys;
        char        *sysbuf = malloc(sizeof(char) * 500);
        int         fd = open("main.c", O_RDONLY);
        sys = read(0, sysbuf, nbyte);
        printf("SYS : [%d], [%s]\n", sys, sysbuf);        
    }
}

void       strcmp_test(char *str0, char *str1)
{
    int         sys;
    int         usr;

    sys = strcmp(str0, str1);
    usr = ft_strcmp(str0, str1);
    printf("SYS : [%d]\n", sys);
    printf("USR : [%d]\n", usr);
}

void    strcpy_test()
{
    char    *dstusr = "DESTINATION";
    char    *srcusr = "SOURCE";
    char    *dstsys = "DESTINATION";
    char    *srcsys = "SOURCE";

    dstsys = strcpy(dstsys, srcsys);
    dstusr = strcpy(dstusr, srcusr);
    printf("SYS : [%s]\n", dstsys);
    printf("USR : [%s]\n", dstusr);
}

void    strdup_test(char *str)
{
    char    *sys;
    char    *usr;

    sys = strdup(str);
    usr = ft_strdup(str);
    printf("SYS : [%s]\n", sys);
    printf("USR : [%s]\n", usr);
}

void    strlen_test(char *str)
{
    size_t  sys;
    size_t  usr;

    sys = strlen(str);
    usr = ft_strlen(str);
    printf("SYS : [%zu]\n", sys);
    printf("USR : [%zu]\n", usr);
}

void    write_test(int fd, void *buf, size_t nbyte)
{
    int     sys;
    int     usr;

    printf("SYS : \n");
        sys = write(fd, buf, nbyte);
    printf("USR : \n");
        usr = ft_write(fd, buf, nbyte);
    printf("SYS : [%d]\n", sys);
    printf("USR : [%d]\n", usr);
}

int     main(void)
{
    char    *str0 = "str0";
    char    *str1 = "str1";
    int     fd = 0;

    read_test();
    // strcmp_test(str0, str1);
    // strcpy_test();
    // strdup_test(str0);
    // strlen_test(str0);
    // write_test(15, str0, 16);
    return (0);
}