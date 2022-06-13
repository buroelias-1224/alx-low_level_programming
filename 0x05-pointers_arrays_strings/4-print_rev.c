/*
 * File: 4-print_rev.c
 * Auth: Buro Elias
 */

#include "main.h"

/**
 * print_rev - Print Reversed string
 * @s: The strng to be reversed
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int counter = 0;

	while (s[counter])
		counter++;

	while (counter--)
	{
		_putchar(s[counter]);

	}

	_putchar('\n');
}
