#include "variadic_functions.h"

/**
 *
 *
 *
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list vl;

	va_start(vl, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(vl, char*) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(vl, char*));

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(vl);
}
