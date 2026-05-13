/*
  ft_strchr
  Locates the first occurrence of a char 'c' in the string 's'.
  Returns a pointer to the first occurrence of 'c' or NULL if the character is not found.
  Parameters:
    - s: string to search.
    - c: character to find.
*/

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*(unsigned char *)s == (unsigned char)c) // Compare the current character with the target chararacter
			return ((char *)s);
		s++;
	}
	if (*(unsigned char *)s == (unsigned char)c) // Check the last character position (the '\0')
		return ((char *)s);
	return (NULL); // Return NULL if 'c' is not found in 's'
}

/* int	main(void)
{
	char str[] = "aabbccc";
	char c = 'c';
	printf("func: %s\n", strchr(str, c));
	printf("myfunc: %s", strchr(str, c));
} */
