#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: 0
 */

void rev_string(char *s)
{
	int x = 0, y, z;
	char zz;

	while (s[x] != '\0')
	{
		x++;
	}
	z = x - 1;
	for (y = 0; z >= 0 && y < z; z--, y++)
	{
		zz = s[y];
		s[y] = s[z];
		s[z] = zz;
	}
}
