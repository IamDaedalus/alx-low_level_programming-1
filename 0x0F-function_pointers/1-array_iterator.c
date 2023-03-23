#include "function_pointersh"
/**
* print_name - Entry point
* @name: char
* @f: char dsfasdf
* Return: Always 0 (Success)
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
