#include <stdio.h>

/**
 * main - Prints a series of numbers with commas
 *
 * Return: Always (Success);
 */
int main(void)
{
int num = 0;
while (num <= 9)
{
putchar(num + 48);

if (num !=9)
{
putchar(',');
putchar(' ');
}

++num;
}
putchar('\n');

return (0);
}
