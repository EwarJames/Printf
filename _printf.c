#include "holberton.h"
#include <stdlib.h>

/**
 * check_s - checks if there is a valid format specifier
 * @format: possible format specifier
 *
 * Return: pointer to valid function or NULL
 */
static int (*check_s(const char *format))(va_list)
{
unsigned int i;
printer_t cat[] = {
{"c", _printc},
{"s", _prints},
{"i", _printi},
{"d", _printd},
{NULL, NULL}
};

for (i = 0; cat[i].var != NULL; i++)
{
if (*(cat[i].var) == *format)
{
break;
}
}
return (cat[i].func);
}

/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
unsigned int i = 0, num = 0;
va_list valist;
int (*func)(va_list);

if (format == NULL)
return (-1);
va_start(valist, format);
while (format[i])
{
for (; format[i] != '%' && format[i]; i++)
{
_putchar(format[i]);
num++;
}
if (!format[i])
return (num);
func = check_s(&format[i + 1]);
if (func != NULL)
{
num += func(valist);
i += 2;
continue;
}
if (!format[i + 1])
return (-1);
_putchar(format[i]);
num++;
if (format[i + 1] == '%')
i += 2;
else
i++;
}
va_end(valist);
return (num);
}
