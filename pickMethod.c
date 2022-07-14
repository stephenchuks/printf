#include "main.h"
#include <stddef.h>

int (*pickMethod(char c))(va_list)
{
    if (c == 'c')
        return (print_c);
    
    if(c == 's')
        return (print_s);
    
    if (c == 'd')
        return(print_i);

    if (c == 'i')
        return (print_i);

    return(NULL);
}