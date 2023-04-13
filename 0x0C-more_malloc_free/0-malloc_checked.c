#include <stdlib.h>
/**
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = mallac(b);
	if (ptr == Null)
	{
		exit(98);
	}
	return (ptr);
}
