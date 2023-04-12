#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: int input
 * @av: char
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	int a, b, y = 0, z = 0;

	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			z++;
	}
	z += ac;

	str = malloc(sizeof(char) * z + 1);

	if (str == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
	for (b = 0; av[a][b]; b++)
	{
		str[y] = av[a][b];
		y++;
	}
	if (str[y] == '\0')
	{
		str[y++] = '\n';
	}
	}
	return (str);
}
