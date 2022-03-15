#include "main.h"
/**
* _printf - prints a string to stdout
* @format: format
* Return: number of characters printed excluding null byte
*/
int _printf(const char *format, ...)
{
	va_list list;

	int i = 0;
	int cn = 0, j = 0;
	id argsel[] = {
		{"c", _print_c}, {"s", _print_s}, {"d", print_number},
		{"i", print_number}, {"%", _print_mod}, {'\0', NULL}
	};

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		if (format == NULL)
			return (-1);
	}

	int i, cn = 0;
	int (*fnpointer)(va_list);

	if (format == NULL)
		return (-1);

	va_start(list, format);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; argsel[j].argument != NULL; j++)
			{
				i++, cn += argsel[j].f(list);
				break;
			}
			if (argsel[j].argument == NULL)
			{
				cn++, _putchar('%');
				return (-1);
			}
			argsel[0] == format[i + 1];
			i++, cn += (list);
			if (format[i + 1] == '\0')
				return (-1);

			fnpointer = print_sel(format[i + 1]);
			cn += fnpointer(list);
			i++;
		}
		else
		{
			_putchar(format[i]);
			cn++;
		}
	}
	va_end(list);
	return (cn);
}
