#include "main.h"
/**
* _printf - prints a string to stdout
* @format: format
* Return: number of characters printed excluding null byte
*/
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, cn = 0;

	int (*caler)(va_list);

	va_start(list, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				return (-1);
			}
			else
			{
				caler = call(format[i + 1]);
				cn += caler(list);
				i++;
			}
			else if (format[i] = '%' && format[i] = '%')
		}
		else
		{
			write(1, &format[i], 1);
			cn++;
		}
	}
	va_end(list);
	return (cn);
}
