/*
ft_bzero
Sets the first n bytes of the memory pointed to by s to zero.
Typically used to clear memory (e.g., strings, buffers).
Parameters:
	- s: pointer to the memory area to be cleared.
	- n: number of bytes to set to '\0'.
*/
	
#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*p;
	int		i;

	i = 0;
	p = (char *)s; // Cast void pointer to char pointer for byte-level access
	while (i < n) // Iterate n times
	{
		p[i] = '\0'; // Sets each byte to '\0'
		i++;
	}
}

/* int main(void)
{
	char str[20] = "hello world";
	char str2[20] = "me is cool";

	printf("before: %s\n", str);

	ft_bzero(str, 3);

	printf("after:  %s\n", str);
	
	bzero(str2, 3);
	printf("bzero: %s\n", str2);
	
	
	for (int i = 0; i < 5; i++)
		printf("%d\n", str[i]);
} */