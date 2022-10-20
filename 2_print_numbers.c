#include "main.h"

/**
 * print_i - prints a number in base 10
 * @list: number to be printed
 *
 * Return: number of chars and digits in decimal
 */

int print_i(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, int), 10);

	if (p_buff == NULL)
		p_buff = "(NULL)";
	for (; p_buff[size]; size++)
	{
		_putchar(p_buff[size]);
	}
	return (size);
}
