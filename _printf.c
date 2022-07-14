#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_string- Function to print strings
 * @str: string to print
 * Return: count
 */

int _printf(const char * const format, ...)
{
	va_list args;
	int i = 0, j=0, k=0;
	int count = 0;
	char *str = NULL;
	int (*func)(va_list);

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
			func = pickMethod(format[i+1]);
			if(func != NULL)
			{
				func(args);
				count++;
				i++;
			}
			i++;
			/*
			// format[i]
			if(format[i+1] == 'c')
			{
			print_c(args);
			count++;
			i++;
			}
		else if (format[i+1] == 's')
		{	
			i++;
			print_s(args);
		}
		else if (format[i+1] == '%')
		{	
			i++;
			_putchar('%)
			count++;
		}
		
		else if (format[i+1]=='d'){
			i++;
			
			print_i(args);
			//print_interger(num)

		}*/
		}
		//_putchar(format[i]);
		i++;
	}

	va_end(args);

	return (count);
}

