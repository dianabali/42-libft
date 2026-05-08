/*
ft_isdigit
Checks whether the given character is a digit.
Returns 1 if the character is a digit and 0 otherwise.
Parameters:
	- c: the character to check.
*/

// #include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	printf("%d", ft_isdigit('5'));
} */