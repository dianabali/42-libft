/*
ft_strlen
Calculates the length of a null-terminated string excluding '\0'.
Parameters:
  - s: input string.
*/

#include "libft.h"
// #include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/* int	main(void)
{
	printf("%zu", ft_strlen("hello"));
} */
