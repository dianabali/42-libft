/*
ft_memset
Fills the first 'n' bytes of the memory area pointed to by 's' with the constant byte 'c'.
Parameters:
  - s: pointer to the memory area to be filled.
  - c: value to set.
  - n: number of bytes to fill.
*/

#include "libft.h"
// #include <stdio.h>
// #include <string.h>
// #include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

  	// Cast to unsigned char for byte-level manipulation
	p = s;
	while (n-- > 0)
		*p++ = c; // Fill the memory byte-by-byte
	return (s);
}

/* int	main(void)
{
	char s[50] = "hello world";
	char s1[50] = "me is cool";

	printf("before: %s\n", s);

	ft_memset(s, 'A', 3);
	
	printf("after: %s\n", s);
	
	memset(s1, 'A', 3);
	printf("memset: %s\n", s1);
} */