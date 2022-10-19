#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/* 0-printf.c */

int _printf(const char *format, ...);

/* handler.c */
int handler(const char *str, va_list list);
int percent_handler(const char *str, va_list list, int *i);

/* utilities.c */
int _strlen(char *s);

/* putchar.c */

int _putchar(char c);
int buffer(char c);
#endif/* MAIN_H */
