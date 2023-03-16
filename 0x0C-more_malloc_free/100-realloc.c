#include "main.h"
#include <string.h>
/**
 * _realloc - function that reallocates
 * a memory block using malloc and free
 * @ptr: old memory
 * @old_size: old allocated bytes
 * @new_size: new allocated bytes
 * Return: new allocateed memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (NULL)
		return (NULL);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			memcpy(p, ptr, old_size);
		}
	}
	return (p);
}
