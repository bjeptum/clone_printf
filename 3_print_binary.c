#include "main.h"
/**
 * print_binary - Print a number in base 2
 * @list: Number to print in base 2
 * Return: Length of the numbers in binary
 */
int print_binary(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 2);
	if (p_buff == NULL)
		p_buff = "NULL";
	for (; p_buff[size]; size++)
	{
		_putchar(p_buff[size]);
	}
	return (size);
}
