/*
ft_memchr
Searches the first 'n' bytes pointed to by 's' for the first occurrence of the character 'c'.
Returns the pointer to the first occurrence of 'c' if 'c' is found in 's' or NULL otherwise.
Parameters:
	- s: pointer to the memory block to search.
	- c: byte value to search for.
	- n: number of bytes to search.
*/

// #include <stdio.h>
// #include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	// Cast input pointer to unsigned char for byte-to-byte access
	str = s;
	while (n > 0) // Iterate n times
	{
		if (*str == (unsigned char)c) // Check if the current byte matches c
			return ((void *)str);
		str++;
		n--;
	}
	return (NULL); // Return NULL if no matching byte was found
}

/* int	main(void)
{
	char str[] = "hello";
	char c = 'e';

	char *pstr1 = (char *)memchr(str, c, 5);
	printf("func: %s\n", pstr1);
	
	char *pstr2 = (char *)ft_memchr(str, c, 5);
	printf("myfunc: %s\n", pstr2);
} */