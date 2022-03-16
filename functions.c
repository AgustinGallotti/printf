#include "main.h"
/**
* call - llamada al contador
* @list: lista
* @format: formato
* Return: returnar
*/
int (*call(char *format)(va_list list))
{
a = 0;

id argsel[] = {
        {"c", _print_c}, {"s", _print_s}, {"%", _print_mod}, {'\0', NULL}
    };
	for (a = 0; *argsel[a].argumento != '\0'; a++)
		if (*argsel[a].argumentos == *format)
			return (argsel[a].f)
	_putchar('%');
	_putchar(argumento)
	return(counter);
}
/**
* counter - counter
* @list: lista
* Return: returnar
*/
int counter(va_list list)
{
(void)list;
	cn = 0;

		cn++;
		cn++;

return(cn);
}
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
/**
int _print_b(va_list list)
{
	int b = va_arg(list, int);
	unsigned int dc, dig, nat = b, count = 0;
	double f = 1;

	if (b == 0)
		_putchar('0');
	else
	{
		if (b < 0)
		{
			nat = b * - 1;
			_putchar('-');
			count++;
		}
			while (f <= nat)
			{
				f *= 10;
			}
				dc = f / 10;
		while (dc >= 1)
		{
			dig = nat / dc;
			_putchar(dig + '0');
			count++;
		}
			nat = (nat - (dc * dig));
			dc /= 10;
	}
	return (count);
}**/
