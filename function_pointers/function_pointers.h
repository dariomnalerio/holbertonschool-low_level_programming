#ifndef function_pointers
#define function_pointers

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif
