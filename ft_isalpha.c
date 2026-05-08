/*
ft_isalpha
Checks whether the given character is a letter.
Returns 1 if the character is a letter and 0 otherwise.
Parameters:
	- c: the character to check.
*/

// #include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	printf("%d", ft_isalpha('U'));
} */