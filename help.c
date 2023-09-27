#include "main.h"
/**
 * help_page - display a small help page.
 * s: program name.
 * Return: Nothing.
*/
void help_page(char *s)
{
    printf("Usage: %s <data type>\nExample: %s pointer -> %lu\n", s, s, sizeof(void *));
    printf("\nSupported types:\nint:\tdata type\nchar:\tchar data type\nfloat:\tfloat data type\ndouble:\tdouble data type\
    \nshort:\tshort type\nlong:\tlong data type\npointer: pointer data type\n");
    printf("--------------------------\n");
    printf("Made by : Salk Ben Elhabchi\nEmail : salekbenelhabhci@gmail.com\n");
}