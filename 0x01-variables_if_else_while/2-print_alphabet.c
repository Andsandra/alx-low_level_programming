#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase alphabet followed by a new line using
 *              only the putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';  /* Initialize letter to 'a' */

	while (letter <= 'z')  /* Loop through the alphabet */
	{
		putchar(letter);  /* Print the current letter */
		letter++;  /* Increment the letter to print the next one */
	}

	putchar('\n');  /* Print a newline character after the alphabet */

	return (0);  /* Exit with success */
}


