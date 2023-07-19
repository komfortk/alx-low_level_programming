#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
