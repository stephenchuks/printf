#include "main.h"
#include <stdarg.h>

int print_s(va_list args)
{
    int j = 0;
    char *s = va_arg(args, char *);
	while (s[j])

{
	_putchar(s[j]);
	j++;
}
return (0);
}
