/*
ft_memmove
Copies 'n' bytes from the memory area pointed to by 'src' to the memory area pointed to by 'dest'.
Unlike memcpy(), this function safely handles overlapping by determining the correct copy direction.
Parameters:
	- dest: destination memory area.
	- src - source memory area.
	- n: the number of bytes to copy.
*/

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*pdest;
	const char	*psrc;

	if (!dest && !src)
		return (NULL);
	
	// Cast pointers for byte-to-byte manipulation 
	pdest = dest;
	psrc = src;

	if (pdest < psrc) // Safe to copy
	{
		while (n--)
			*pdest++ = *psrc++; // Copy forward form beginning to end.
	}
	else // If dest starts inside src (dest > src)
	{
		// Move pointers to the last byte position
		pdest = pdest + n - 1;
		psrc = psrc + n - 1;
		while (n--)
			*pdest-- = *psrc--; // Copy backwards
	}
	return (dest);
}

/* int	main(void)
{
	char src1[] = "hello world";
	char src2[] = "hello world";
	char dest1[50] = "aaa";

	printf("before: %s\n", src1);
	ft_memmove(dest1, src1, 4);
	printf("after: %s\n", dest1);
	
	memmove(dest1, src1, 4);
	printf("memmove: %s\n", dest1);
} */