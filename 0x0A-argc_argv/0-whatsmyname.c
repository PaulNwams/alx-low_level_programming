#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the program
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("the name of the program is %s\n", argv[0]);
	return (0);
}
