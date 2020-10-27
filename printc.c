#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * _printc - prints a char
 * @c_list: char to print
 *
 * Return: always 1
 */
int _printc(va_list c_list)
{
char ch = (char)va_arg(c_list, int);

_putchar(ch);
return (1);
}

/**
 * _prints - prints a string
 * @s_list: string to print
 *
 * Return: number of chars printed
 */
int _prints(va_list s_list)
{
int count;
char *str = va_arg(s_list, char *);

if (str == NULL)
str = "(null)";
for (count = 0; str[count]; count++)
{
_putchar(str[count]);
}
return (count);
}
