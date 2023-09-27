#include "main.h"
/**
 * search - search for the right data type.
 * @s: a given string to check
 * 
 * Return: a function pointer that print the size of it, otherwise NULL.
*/
void (*search(char *s))(void)
{
    int i;
    dt a[] = {
        {"int", _sint},
        {"char", _schar},
        {"float", _sfloat},
        {"double", _sdouble},
        {"short", _sshort},
        {"long", _slong},
        {"pointer", _svoid}
    };

    for (i = 0; i < 7; i++)
    {
        if (_strcmp(a[i].type, s) == 0)
            return (a[i].f);
    }
    return (NULL);
}