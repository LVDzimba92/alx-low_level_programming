#include "main.h"

/**
 * _strcpy -  copies the string pointed to by src
 * @dest: char to check
 * @src: char to check
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int s;

	for (s = 0; src[s] != '\0'; s++)
		dest[s] = src[s];
	dest[s] = '\0';
	return (dest);
}
