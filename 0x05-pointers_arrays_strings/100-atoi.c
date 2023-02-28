#include "main.h"

/**
 *_atoi - converts a string to an integer
 *@s: pointer to string to be converted
 *
 *Return: the converted integer
 */
int _atoi(char *s)
{
	int c = 0; /*index for iterating over the string */
	unsigned int ni = 0; /*holds the converted integer */
	int min = 1; /*used to determine if number is negative */
	int isi = 0; /*used to determine if there are any integers in the string */

	while (s[c]) /*loop until end of string is reached */
	{
		if (s[c] == 45) /*check if '-' character is present */
		{
			min *= -1; /*set the value of min to -1 to indicate negative number */
		}

		while (s[c] >= 48 && s[c] <= 57) /*loop through digits */
		{
			isi = 1; /*set isi to 1 to indicate integer is present */
			ni = (ni *10) + (s[c] - '0'); /*convert char to integer and add to ni */
			c++;
		}

		if (isi == 1) /*check if an integer has been found */
		{
			break; /*exit loop */
		}

		c++; /*increment index */
	}

	ni *= min; /*multiply ni by min to get the correct sign */

	return (ni); /*return the converted integer */
}
