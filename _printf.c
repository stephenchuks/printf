#include "main.h"
#include <stdarg.h>
#include <stddef.h>

int _printf(const char * const format, ...)
{
	va_list args;
	int i = 0, j=0;
	int count = 0;
	char *str = NULL;

	va_start(args, format);

	while(format[i] != '\0')
	{
		if(format[i] != '%')
		{	
			_putchar(format[i]);
			count++;
		}			
		else
		{
			/* format[i]*/
			if(format[i+1] == 'c')
			{
			_putchar(va_arg(args, int));
			count++;
			i++;
			}
		else if (format[i+1] == 's')
		{	
			i++;
			str = va_arg(args, char *);
			j = 0;
			while (str[j])
			{
			_putchar(str[j]);
			count++;
			j++;
			}
		}
		else if (format[i+1] == '%')
		{	
			i++;
			_putchar('%');
			count++;
		}
		}
		//_putchar(format[i]);
		i++;
	}

	va_end(args);

	return (count);
}

