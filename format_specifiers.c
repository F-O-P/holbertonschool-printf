#include "main.h"
#include <stdio.h>
/**
 * print_char - print character
 * @list: get list
 * Return: Always 0
 */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_string - print string
 * @list: get list
 * Return: Always 0
 */

int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_percent - print percent
 * @list: get list
 * Return: Always 0
 */

int print_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}

