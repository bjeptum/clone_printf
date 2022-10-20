#include "main.h"
/**
 *  _strlen - returns the length of a string
 *  @str: string inputted
 *  Return: length of string
 */
int _strlen(const char *str)
{
	int i = 0;

	for (; *str != '\0'; str++)
	{
		i++;
	}
	return (i);
}

/**
 * print - print char
 * @str: string
 * Return: string length
 */
int print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);
	return (i);
}
