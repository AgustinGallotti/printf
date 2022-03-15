#include "main.h"
/**
* _printf - prints a string to stdout
* @format: format
* Return: number of characters printed excluding null byte
*/
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, cn = 0, j = 0;
	id argsel[] = {
		{"c", _print_c}, {"s", _print_s}, {"d", "i", print_number},
		{"%", _print_mod}, {"b", _print_b}, {'\0', NULL},
	};
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		va_start(list, format);
		for (i = 0; format != NULL && format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				for (j = 0; argsel[j].argument != NULL; j++)
				{
					if (argsel[j].argument[0] == format[i + 1])
					{
						i++; cn += argsel[j].f(list);
						break;
					}
					if (argsel[j + 1].argument == NULL)
					{
						if (format[i + 1] > 32 && format[i + 1] < 127)
						{
							cn++; _putchar('%');
						}
						else
							return (-1);
					}
				}
			}
			else
			{
				_putchar(format[i]);
				cn++;
			}
		}
	}
		va_end(list);

		return(cn);
}
