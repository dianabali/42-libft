/*
ft_alnum
Checks whether the given character is an uppercase letter, a lowercase letter, or a digit.
Returns 1 if the character is alphanumeric and 0 otherwise.
Parameters:
	- c: the character to check.
*/

// #include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	printf("%d", ft_isalnum('A'));
} */