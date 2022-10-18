#include  "main.h"
/*
 * _printf: produce  an output according to a format
 * @format: character string
 *
 * Return: Number of characters printed (excluding
 * the null byte to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int size;

	va_start(arg, format);
	sizde = vfprintf (stdout, format, arg);
	va_end (arg);

	return size;
}
