#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: arrays of argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		/*print all the arguments*/
		printf("%s\n", argv[j]);
	}
}
