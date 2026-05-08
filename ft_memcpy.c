/*
ft_memcpy
Copies 'n' bytes from the memory area pointed to by 'src' to the memory area pointed to by 'dest'.
Parameters:
	- dest: destination memory area.
	- src: source memory area.
	- n: the number of bytes to copy.
NOTE: memcpy does not handle overlapping memory areas safely.
*/

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;

	if (!dest && !src)
		return (NULL);
	// Cast pointers for byte-to-byte copying
	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	while (n--)
		*pdest++ = *psrc++; // Copy the bytes
	return (dest);
}

/* int	main(void)
{
	char src[] = "hello world";
	char dest1[50];
	char dest2[50];

	printf("before: %s\n", src);
	
	ft_memcpy(dest1, src, sizeof(src));
	
	printf("after: %s\n", dest1);
	
	memcpy(dest2, src, sizeof(src));
	
	printf("memcpy: %s\n", dest2);
} */
