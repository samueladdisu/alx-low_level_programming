#include "main.h"
#include <stdio.h>
/**
 * print_rev - print reverse of given string
 * @s: contains string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	char ch;
	int i, j;

	for (i = 0; s[i] != 0; i++)
		;
	for (j = i - 1; j >= 0; j--)
	{
		ch = s[j];
		printf("%c", ch);
	}
	printf("\n");
}
