#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _print_c(va_list list);
int _print_s(va_list list);
int print_number(va_list list);
int _print_mod(va_list list);
int reverse_str(va_list list);

/**
* argsel - struct as a selector to char and to function pointer as args
* @argument: argument selector
* @f: functions
*/
typedef struct argsel
{
char *argument;
int (*f)(va_list list);
} id;

#endif
