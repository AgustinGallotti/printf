#include "main.h"
/**
* _print_c - print a char
* @list: arg from list
* Return: counter
*/
int _print_c(va_list list)
{
	int cn = 0;

	_putchar(va_arg(list, int));
	cn++;

	return (cn);
}
/**
* _print_s - print a string
* @list: arg from list
* Return: counter
*/
int _print_s(va_list list)
{
	int i, cn = 0;
	char *str = va_arg(list, char *);

	if (!str)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		cn++;
	}
	return (cn);
}
/**
* _print_mod - print a module char
* @list: arg from list
* Return: counter
*/
int _print_mod(va_list list)
{
	int cn = 0;
	(void) list;

	_putchar('%');
	cn++;

	return (cn);
}
/**
* print_number - asas
* @list: lista buscadora
* Return: count
*/
int print_number(va_list list)
{
	int n = va_arg(list, int);
	unsigned int dc, dig, nat = n, count = 0;
	double f = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			nat = n * -1;
			_putchar('-');
			count++;
		}

		while (f <= nat)
			f *= 10;
		dc = f / 10;

		while (dc >= 1)
		{
			dig = nat / dc;
			_putchar(dig + '0');
			count++;
			nat = (nat - (dc * dig));
			dc /= 10;
		}
	}
	return (count);
}
