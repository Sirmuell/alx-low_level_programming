#include <stdio.h>

/**
 * main -print single digits starting from 0
 *
 * Return: return zero as the end
 */
int main(void)
{
int i = 48;
int j;
int cal = 44;
int sp = 32;

for (; i <= 57; i++)
{
j = i + 1;
for (; j <= 57; j++)
{
putchar (i);
putchar (j);
if (i != 56 || (i == 56 && j != 57))
{
putchar (cal);
putchar (sp);
}
}
}
putchar ('\n');
return (0);
}
