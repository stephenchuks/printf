#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int print_i(va_list args);
int print_s(va_list args);
int print_c(va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
int (*pickMethod(char c))(va_list);
#endif
