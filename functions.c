#include "main.h"
/**
* call - llamada al contador
* @list: lista
* @format: formato
* Return: returnar
*/
int (*call(char format))(va_list)
{
	id argsel[] = {
			{"c", _print_c},
			{"s", _print_s},
			{"%", _print_mod},
			{"i", _print_i},
			{"d", _print_i},
			{"b", _print_b},
			{'\0', NULL}
	 };

	int j = 0;

	for (j = 0; *argsel[j].argumento != '\0'; j++)
	{
		if (format == *argsel[j].argumento)
		{
			return (argsel[j].f);
		}
	}
	_putchar('%');
	_putchar(formato);
	return (counter);

}
/**
* _print_i - print integer and decimal
* @list: list
* Return: counter
*/
int _print_i(va_list list)
{
	long int n = va_arg(list, int);
	unsigned int dc, dig, nat = n;
	double f = 1;
	int count = 0;

	if (!n)
		n = '\0';
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
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
			count += _putchar(dig + '0');
			nat = (nat - (dc * dig));
			dc /= 10;
		}
	}
	return (count);
}
/**
* counter - counter
* @list: lista
* Return: returnar
*/
int counter(va_list list)
{
	int cn = 0;
	(void)list;

	cn++;
	cn++;

	return (cn);
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
	(void)list;

	_putchar('%');
	cn++;

	return (cn);
}
