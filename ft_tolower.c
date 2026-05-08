/*
ft_tolower
Convers an uppercase letter to lowercase.
Returns the lowercase version of the uppercase letter or the lowercase letter.
Parameters:
  - c: character to convert
*/

// #include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/* int	main(void)
{
	printf("%d", ft_tolower('A'));
} */