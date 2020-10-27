#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct printer - structure to print various data types
 * @var: type to print
 * @func: function to print
 */
typedef struct printer
{
char *var;
int (*func)(va_list);
} printer_t;


int _printf(const char *format, ...);
static int (*check_s(const char *format))(va_list);
int _putchar(char c);
int _printc(va_list c_list);
int _prints(va_list s_list);
int _printi(va_list i_list);
int _printd(va_list d_list);
int _printu(va_list u_list);
int _printb(va_list b_list);
int _printo(va_list o_list);
int _printx(va_list x_list);
int _printX(va_list X_list);
int _printp(va_list p_list);
int _printS(va_list S_list);
int _printr(va_list r_list);
int _printR(va_list R_list);

#endif
