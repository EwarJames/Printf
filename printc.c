#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * _printc - prints a char
 * @c: char to print
 *
 * Return: always 1
 */
int _printc(va_list c)
{
char ch = (char)va_arg(c, int);

_putchar(ch);
return (1);
}

/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: number of chars printed
 */
int _prints(va_list s)
{
int count;
char *str = va_arg(s, char *);

if (str == NULL)
str = "(null)";
for (count = 0; str[count]; count++)
{
_putchar(str[count]);
}
return (count);
}
