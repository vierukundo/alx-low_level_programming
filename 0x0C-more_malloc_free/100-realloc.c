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
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size && new_size != 0)
	{
		p = malloc(old_size);
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
	else if (new_size < old_size && new_size != 0)
	{
		for (i = 0; i < new_size; i++)
			memcpy(p, ptr, new_size);
		free(ptr);
	}
	return (p);
}
