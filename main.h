#ifndef MAIN_H
#define MAIN_H

/* Headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct datatype - prints the sizeof the datatype
 * @type: a given string as refers to a data type.
 * @f: a function pointer.
 */
typedef struct datatype
{
    char *type;
    void (*f)(void);
} dt;

/* Important functions */
int _strcmp(char *, char *);
void help_page(char *);
void (*search(char *))(void);

/* Printing functions */
void _sint(void);
void _schar(void);
void _sfloat(void);
void _sdouble(void);
void _sshort(void);
void _slong(void);
void _svoid(void);

#endif