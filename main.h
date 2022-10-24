#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/* 0-printf.c */
int _printf(const char *format, ...);

/* handler.c */
int handler(const char *str, va_list list);
int percent_handler(const char *str, va_list list, int *i);

/* utilities.c */
int _strlen(const char *s);
char *itoa(long int, int);
int print(char *);

/* putchar.c */
int _putchar(char c);
int buffer(char c);

/* printf handling format specifiers */
int print_char(va_list list);
int print_string(va_list list);
int print_integer(va_list);
int print_binary(va_list);
int print_rot(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_hexadecimal_low(va_list);
int print_hexadecimal_upp(va_list);
int print_pointer(va_list);
int print_rev_string(va_list);

/**
 * struct _format - Typedef struct
 * @type: the format
 * @f: The function associated
 */

typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;

#endif/* MAIN_H */
