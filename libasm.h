#ifndef LIBASM_H
#define LIBASM_H

#include <errno.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <string.h>

ssize_t     read(int fildes, void *buf, size_t nbyte);
int         strcmp(const char *s1, const char *s2);
char        *strcpy(char * dst, const char * src);
char        *strdup(const char *s1);
size_t      strlen(const char *s);
ssize_t     write(int fildes, const void *buf, size_t nbyte);

#endif