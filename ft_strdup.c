/*
Allocates memory and creates a duplicate of the string 's'.
Parameters:
	- s: source string to duplicate.
NOTE: Memory for the new string is allocated using malloc() and the duplicated string must be freed by the user using free().
*/

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

char	*ft_strdup(const char *s)
{
	int		i;
	int		length;
	char	*target;

	length = 0;
	while (s[length]) // Calculate the length of s
		length++;
	target = (char *) malloc(sizeof(char) * (length + 1)); // Allocate memory
	if (target == NULL) // Check if allocation failed
		return (NULL);
	i = 0;
	while (i < length)
	{
		target[i] = s[i]; // Copy characters
		i++;
	}
	target[i] = '\0';
	return (target);
}

/* int	main(void)
{
	char	str[] = "hello";
	printf("myfunc: %s\n", ft_strdup(str));
	printf("strdup: %s\n", strdup(str));
} */