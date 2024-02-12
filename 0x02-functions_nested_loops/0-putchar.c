#include "main.h"
/**
 * main - function main begins program execution
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char message[] = "_putchar\n";
	int i = 0;

	while (message[i] != '\0')
	{
		_putchar(message[i]);
		i++;
	}
	return (0);
}
