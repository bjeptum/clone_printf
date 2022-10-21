#include "main.h"
/**
 * print_unsigned - Print a unsigned int
 * @list: Number to print
 * Return: Length of the number
 */
int print_unsigned(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 10);
	if (p_buff == NULL)
		p_buff = "NULL";
	for (; p_buff[size]; size++)
	{
		_putchar(p_buff[size]);
	}
	return (size);
}
