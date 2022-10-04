#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
return ('\0');

arr = malloc(size);

if (arr == NULL)
return ('\0');

for (i = 0; i < size; i++)
arr[i] = c;

arr[size] = '\0';

return (arr);
}
