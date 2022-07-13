#include "main.h"
<<<<<<< HEAD
#include <stdio.h>

/**
 * _printf - function that works like printf 
 * @format: the format used to print character
 * Return: result
 */

int _printf(const char *format, ...)
{
	va_list valist;
	unsigned int i = 0;
	unsigned int result = 0;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(valist, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '\0' || (format[i] == '%' && !format[i + 1]))
		{
			return (-1);
		}
		else if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i' || format[i + 1] == 's' || format[i + 1] == 'c' || format[i + 1] == '%'))
		{
			result += (*format_conversion(format[i + 1]))(valist);
			i++;
		}
		else
		{
			result += _putchar(format[i]);
		}
	}
	va_end(valist);
	return (result);
}

=======
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
>>>>>>> 7645cce1f889dac8773a88e529bcfdb88e39dcf4

