#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes allocate
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *me;

	me = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
