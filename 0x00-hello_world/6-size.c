#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	printf("Size of a char: %zu bytes\n", sizeof(char));
	printf("Size of a long: %zu bytes\n", sizeof(long));
	printf("Size of a unsigned long: %zu bytes\n", sizeof(unsigned long));
	printf("Size of a double: %zu bytes\n", sizeof(double));
	printf("Size of a float: %zu bytes\n", sizeof(float));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
		return (0);
}
