/*
ft_strlcpy
Copies a string form 'src' to 'dst' ensuring null-termination and preventing buffer overflow.
Returns the length of the src string.
Parameters:
  - dst: destination buffer.
  - src: source string.
  - size: size of destination buffer.
*/

#include "libft.h"
// #include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	src_length;
	unsigned int	i;

	src_length = 0;
	while (src[src_length] != '\0') // Calculate the length of the source
		src_length++;

  // If size is greater than 0, start copying
	if (size > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < size - 1) // Copy up to size -1 characters
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0'; // Null-terminate dest
	}
	return (src_length); // Return the length
}

/* int main(void)
{
	char src[] = "I love green";
	char dest[50];
	
	ft_strlcpy(dest, src, 50);
	printf("src: %s\n", src);
	printf("dest: %s (copy)", dest);
} */