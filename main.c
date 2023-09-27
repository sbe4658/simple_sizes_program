#include "main.h"
/**
 * main - prints the sizes of various data types.
 * @ac: argument count.
 * @av: argumrnt vector.
 * 
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    int i;
    void (*f)(void);
    
    if (ac < 2)
    {
        fprintf(stderr, "Error: No argument found\nUsage: %s <data type or argument>\n\tuse help or h for help\n", av[0]);
        return (-1);
    }
    if (_strcmp(av[1], "help") == 0 || *av[1] == 'h')
    {
        help_page(av[0]);
        return (0);
    }
    for (i = 1; av[i]; i++)
    {
        f = search(av[i]);
        if (f == NULL)
        {
            printf("%s can not be found\n", av[i]);
        }
        if (f)
        {
            printf("The size of %s is:\t", av[i]);
            f();
        }
    }
    return (0);
}