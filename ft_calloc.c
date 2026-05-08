/*
ft_calloc
Allocates memory for an array of 'nmemb' elements each of 'size' bytes and initializes all bytes to 0.
Returns a pointer to the allocated memory block or NULL if the allocation fails.
Parameters:
	- nmemb: number of elements to allocate.
	- size: size in byte of each element.
*/

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	sum;
	void	*ptr;

	sum = nmemb * size; // Total bytes needed to allocate
	ptr = malloc(sum); // Allocates memory block
	if (!ptr) // If allocation fails
		return (NULL);
	ft_memset(ptr, 0, sum); // Fills the allocated area with zeros
	return (ptr);
}

/* int	main(void)
{
	int	*arr;
	int	i;

	arr = ft_calloc(3, sizeof(int));
	if (!arr)
		return (1);
	i = 0;
	while (i < 3)
	{
		printf("%d ", arr[i]);
		i++;
	}
	free(arr);
	return (0);
} */