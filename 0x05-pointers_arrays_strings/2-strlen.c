[A[A[A[A[A[A[A[A[A[A[B[B[B[B[B[B[B[B[B[B[B[B#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: parameter passed
 *
 * Return: 0 as success
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
