#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of three single-digit numbers
 * separated by ", " and printed in ascending order
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	putchar('\n');

	return 0;
}
