#include "main.h"
/**
 * Print_Alphabet - Prints the alphabeth in lower case
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;
	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
