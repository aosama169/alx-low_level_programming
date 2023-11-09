#include "variadic_functions.h"

/**
 * print_all - print any passed parameters
 * @format: types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *seprat = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", seprat, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", seprat, va_args(list, int));
					break;
				case 'f':
					printf("%s%f", seprat, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", seprat, str);
					break;
				default:
					i++;
					continue;
			}
			seprat = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
