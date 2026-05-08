/*
ft_strlcat
Appends the string 'src' to the end of 'dst' of total size 'size'.
Returns the total length of the string (dst + src).
Parameters:
  - dst: destination string.
  - src: source string.
  - size: full size of the destination buffer.
*/

#include "libft.h"
// #include <stdio.h>

// Used to calculate the length

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	i;

  // Get the lengths
	d = ft_strlen(dst);
	s = ft_strlen((char *)src);

	i = 0;

  // If dest >= size, return what would have been the total size
	if (size <= d)
		return (size + s);

  // Append characters from src to dst and leave space for '\0'
	while (src[i] != '\0' && (d + i) < (size - 1))
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0'; // Null-terminate the result
	return (d + s);
}

/* int main(void)
{
	char dest[10] = "hello";
	char src[10] = "world";

	printf("Dest Before: %s\n", dest);
	printf("Return of strlcat: %zu\n", ft_strlcat(dest, src, 50));
	printf("Dest after: %s\n", dest);
} */