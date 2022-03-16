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
	_putchar(format);
	return (counter);
	
}
/**
*
*
*
*/
int _print_i(va_list list)
{
	unsigned int i, i_cp;
	int dgts = 0, n, cn = 0, num = va_arg(list, int);

	if (num < 0)
	{
		_putchar('-');
		cn++;
		i = (unsigned int) (0 - num);
	}
	else if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	else
		i = (unsigned int)num;

	i_cp = i;

	while (i_cp != 0)
	{
		i_cp /= 10;
		dgts++;
	}

	dgts--;

	for (; dgts > 0; dgts--)
	{
		n = i / _pwr(10, dgts);
		_putchar (n + '0');
		cn++;
		i = i % _pwr(10, dgts);
	}

	_putchar((i % 10) + '0');
	cn++;

	return (cn);
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
