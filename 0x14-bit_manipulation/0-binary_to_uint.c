#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 *
 * Takes a pointer to a const char string representing a binary number
 * and converts it into an equivalent unsigned integer value.
 *
 * @b: Pointer to a constant character string containing the binary number.
 *
 * Return: The unsigned integer equivalent of the binary string `b`.
 * If `b` is NULL or contains invalid characters, returns 0.
 */
unsigned int binary_to_uint(const char *b)
{
	/*Variable to store the computed unsigned integer value*/
	unsigned int val = 0;
	int i = 0; /*Loop variable*/

	/*Check if the input pointer is NULL*/
	if (b == NULL)
		return (0); /*Return 0 indicating failure*/

	/*Iterate through each character of the string until null char*/
	for (i = 0; b[i]; i++)
	{
		/*Check if the current character is not a valid binary digit (0 or 1)*/
		if (b[i] < '0' || b[i] > '1')
			return (0); /*Return 0 indicating failure*/

		/*Update the unsigned int by shifting left and adding binary value*/
		val = 2 * val + (b[i] - '0');
	}

	return (val);
}
