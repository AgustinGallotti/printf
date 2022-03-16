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
int _print_mod(va_list list);
int counter(va_list list);
int (*call(char))(va_list);
int _print_i(va_list);
/**
* argsel - struct as a selector to char and to function pointer as args
* @argument: argument selecto
* @f: function
*/
typedef struct argsel
{
char *argumento;
int (*f)(va_list list);
} id;

#endif

