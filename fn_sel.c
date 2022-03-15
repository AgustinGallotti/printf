#include "main.h"
/**
* print_sel - function pointer to functions
* @idsel: char to compare
* Return: function used and counter
*/
int (*print_sel(char idsel))(va_list)
{
	id fnarray[] = {
		{"c", _print_c},
		{"s", _print_s},
		{"%", _print_mod},
		{'\0', NULL}
	};

	int j = 0;

	for (j = 0; fnarray[j].argument != NULL; j++)
	{
		if (idsel == *fnarray[j].argument)
		{
			return (fnarray[j].f);
		}
	}
	_putchar('%');
	_putchar(idsel);
/*
*	solution without unkown file (for simple main file)
*		if (fnarray[j].argument == NULL)
*		{
*			_putchar('%');
*			cn++;
*		}
*/
	return (fn_unk);
}
