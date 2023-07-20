#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	unsigned int i = 0;
	char format_char;

	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		format_char = format[i];

		if (format_char == 'c')
		{
			printf("%s%c", separator, va_arg(args, int));
		}
		else if (format_char == 'i')
		{
			printf("%s%d", separator, va_arg(args, int));
		}
		else if (format_char == 'f')
		{
			printf("%s%f", separator, va_arg(args, double));
		}
		else if (format_char == 's')
		{
			char *str = va_arg(args, char*);

			if (str == NULL)
				str = "(nil)";
			printf("%s%s", separator, str);
		}

		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
