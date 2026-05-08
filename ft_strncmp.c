/*
ft_strncmp
Compares at most 'n' characters of two strings.
Returns:
  - 0 if the strings are equal up to 'n' characters.
  - A positive value if s1 is greater than s2.
  - A negative value if s1 is smalles than s2.
Parameters:
  - s1: the first string.
  - s2: the second string.
  - n: max number of characters to compare.
*/

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;

  // If no chars are requested, the strings are equal
	if (n == 0)
		return (0);

  // Compare characters
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]); // Return the difference of the first mismatching chars
}

/* int	main(void)
{
	char s1[] = "1";
	char s2[] = "1";	
	
	printf("realfunc: s1 - s2: %d\n", strncmp(s1, s2, 1));
	printf("myfunc: s1 - s2: %d\n", ft_strncmp(s1, s2, 1));
} */