/*
ft_toupper
Converts a lowercase letter to uppercase.
Returns the lowercase version or the uppercase letter.
Parameters:
  - c: the character to convert.
*/

// #include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/* int	main(void)
{
	printf("%d", ft_toupper('a'));
} */
