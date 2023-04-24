#include "main.h"
#include <stdarg.h>  // for va_list, va_start, and va_arg
#include <stdio.h>   // for putchar and puts

/**
 * _easy - produces output according to a format.
 * @format: character string containing zero or more directives
 *
 * Return: the number of characters printed (excluding the null byte used to end output to strings)
 */
int _easy(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;  // move past the '%'

            switch (*format)
            {
                case 's':
                    count += puts(va_arg(args, char *));
                    break;

                case 'c':
                    putchar(va_arg(args, int));
                    count++;
                    break;

                case '%':
                    putchar('%');
                    count++;
                    break;

                default:
                    putchar('%');
                    putchar(*format);
                    count += 2;
                    break;
            }
        }
        else
        {
            putchar(*format);
            count++;
        }

        format++;
    }

    va_end(args);

    return count;
}
