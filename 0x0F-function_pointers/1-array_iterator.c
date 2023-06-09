#include "function_pointers.h"
/**
* array_iterator - Entry point
* @array: a array
* @size: a size_t
* @action: a action
* Return: Always 0 (Success)
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < (int)size; i++)
		action(*(array + i));
}
