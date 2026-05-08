/*
ft_strnstr
Locates the first occurrence of the string 'little' in 'big' but only with the first 'len' chars of 'big'.
Returns:
	- Pointer to the first occurrence of 'little' in 'big'.
	- 'big' if 'little' is an empty string.
	- NULL if 'little' is not found in 'big'.
Parameters:
	- big: the string to be searched.
	- little: substring to find.
	- len: max number of chars to search in 'big'.
*/

#include "libft.h"
// #include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
  	// If little is empty, return the entire big
	if (little[0] == '\0')
		return ((char *)big);
  	// Iterate through big up to len chars
	while (big[i] && i < len)
	{
		j = 0;
    	// Compare chars of big to chars of little. Don't exceed len
		while (i + j < len && big[i + j] && little[j] 
			&& big[i + j] == little[j])
		{
			j++;
      		// If match fount, return big starting from little
			if (little[j] == '\0')
				return ((char *) &big[i]);
		}
		i++;
	}
  	// If no match found
	return (NULL);
}

/* int	main(void)
{
	char big[] = "helloworld";
	char little[] = "lo";

	printf("func: %s\n", ft_strnstr(big, little, 5));
} */