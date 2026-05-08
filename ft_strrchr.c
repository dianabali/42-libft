/*
  ft_strrchr
  Locates the last occurrence of a character 'c' in the string 's'.
  Returns a pointer to the last occurrence of 'c' or NULL if the character is not found.
  Parameters:
    - s: string to be searched.
    - c: character to search for.
  NOTE: '\0' is also considered.
*/

// #include <stdio.h>
// #include <string.h> 

char	*ft_strrchr(const char *s, int c)
{
	char	*end;

	end = NULL;
  
  	// Iterate 's' and update 'end' each time 'c' is found
	while (*s)
	{
		if (*s == (unsigned char)c)
			end = ((char *)s);
		s++;
	}
	if (*(unsigned char *)s == (unsigned char)c)
		return ((char *)s);
	return (end);
}

/* int	main(void)
{
	char str[] = "heeeello";
	char c = 'e';

	printf("func: %s\n", strrchr(str, c));
	printf("myfunc: %s\n", ft_strrchr(str, c));
} */