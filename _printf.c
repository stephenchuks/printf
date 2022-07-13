#include "main.h"
<<<<<<< HEAD

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			/* write(1, &format[i], 1);*/
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			printed = handle_print(format, &i, list, buffer,
				flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}

	print_buffer(buffer, &buff_ind);

	va_end(list);

	return (printed_chars);
}
=======
#include <stdarg.h>
#include <stddef.h>
>>>>>>> e1917995270a331a3aef5fb59a301b8c65658f98

/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
<<<<<<< HEAD
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}
=======
	va_list args;
	int i = 0, j=0, k=0;
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
			/*print_c('%)*/
			_putchar('%');
			count++;
		}
		
		else if (format[i+1]=='d){
			i++;
			k = va_arg(args, int);
			/*print_interger(num)*/

		}
		}
		//_putchar(format[i]);
		i++;
	}

	va_end(args);

	return (count);
}

>>>>>>> e1917995270a331a3aef5fb59a301b8c65658f98
