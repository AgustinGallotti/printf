#include "main.h"
/**
* _print_b - sas
* @list: lista buscadora
* Return: count
*/
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
}
