#include "main.h"

/**
 *_strcpy - copies a string
 *@dest: pointer to destination array where string is to be copied
 *@src: pointer to source array containing string to be copied
 *
 *Return: pointer to destination array
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	/*loop through source array until null character is reached */
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i]; /*copy character from source to destination */
	}

	dest[i++] = '\0'; /*add null character to terminate copied string */

	return (dest); /*return pointer to destination array */
}
