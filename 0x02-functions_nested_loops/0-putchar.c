@@ -1,13 +1,11 @@
#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * main - Entry point
 * Return: Always 0 (Success)
 */
int _putchar(char c)
int main(void)
{
	return (write(1, &c, 1));
printf("_putchar\n");

return (0);
}
