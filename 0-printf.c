#include  "main.h"
/*
 * _printf - produces an output according to a format
 * @format: character string
 *
 * Return: Number of characters printed (excluding
 * the null byte to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int size;

	if (format == NULL)
		return (-1);

	size = _strlen(format);
	if (size <= 0)
		return (0);

	va_start(args format);
	size = handler(format, args);

	_putchar(-1);
	va_end(args);

	return (size);
}
