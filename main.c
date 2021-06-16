/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 16:49:12 by abelarif          #+#    #+#             */
/*   Updated: 2021/06/16 11:38:07 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"


#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include "libasm.h"
#include <fcntl.h>

void    read_test(void)
{
    size_t      nbyte = 10;

    {
        int         usr;
        char        *usrbuf = malloc(sizeof(char) * 500);
        int         fd = open("main.c", O_RDONLY);
        usr = ft_read(fd, usrbuf, nbyte);
        printf("USR : [%d], [%s]\n", usr, usrbuf);
        close(0);
    }
    {
        int         sys;
        char        *sysbuf = malloc(sizeof(char) * 500);
        int         fd = open("main.c", O_RDONLY);
        sys = read(fd, sysbuf, nbyte);
        printf("SYS : [%d], [%s]\n", sys, sysbuf);        
    }
}

void    strcmp_test(char *str0, char *str1)
{
    int         sys;
    int         usr;

    printf("SYS : [%d]\n", sys = strcmp(str0, str1));
    printf("USR : [%d]\n", usr = ft_strcmp(str0, str1));
}

void    strcpy_test()
{
    char    *dstusr = strdup("DST");
    char    *srcusr = strdup("SOURCE");
    char    *dstsys = strdup("DST");
    char    *srcsys = strdup("SOURCE");

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
    printf("");
    write(1,"SYS : [", strlen("SYS : ["));
        sys = write(fd, buf, nbyte);
    write(1, "]\n", strlen("]\n"));

    write(1,"USR : [", strlen("USR : ["));
        usr = ft_write(fd, buf, nbyte);
    write(1, "]\n", strlen("]\n"));

    printf("SYS : [%d]\n", sys);
    printf("USR : [%d]\n", usr);
}

int     main(void)
{
    char    *str0 = "str0";
    char    *str1 = "strA";

    write(1, "\nREAD TEST : \n", strlen("\nREAD TEST : \n"));
        read_test();
    printf("******************************************************************\n");

    write(1, "\nSTRCMP TEST : \n", strlen("\nSTRCMP TEST : \n"));
        strcmp_test(str0, str1);    
    printf("******************************************************************\n");
    
    write(1, "\nSTRCPY TEST : \n", strlen("\nSTRCPY TEST : \n"));
        strcpy_test();
    printf("******************************************************************\n");

    write(1, "\nSTRDUP TEST : \n", strlen("\nSTRDUP TEST : \n"));
        strdup_test(str0);
    printf("******************************************************************\n");

    write(1, "\nSTRLEN TEST : \n", strlen("\nSTRLEN TEST : \n"));
        strlen_test(str0);
    printf("******************************************************************\n");

    write(1, "\nWRITE TEST : \n", strlen("\nWRITE TEST : \n"));
        write_test(1, str0, 6);
    printf("******************************************************************\n");

    if (str0 == NULL || str1 == NULL) 
        return (0);
}