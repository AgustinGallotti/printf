#include "main.h"
/**
* print_sel - function pointer to functions
* @idsel: char to compare
* Return: function used and counter
*/
int (*print_number(char *argument))(va_list list)
{
	id argsel[] = {
		{"c", _print_c},
		{"s", _print_s},
		{"%", _print_mod},
		{"d", print_number},
		{"i", print_number},
		{'\0', NULL}
	};

	int j = 0;

	for (j = 0; *argsel[j].argument != NULL; j++)
	{
		if (argument == *argsel[j].argument)
		{
			return (*argsel[j].f);
		}
	}
	_putchar('%');
	_putchar(argument);
	return (counter_cn);
}
int counter_cn(va_list list)
{
	(void)list;
	int count = 0;

	count++;
	count++;
	return (count);
}
