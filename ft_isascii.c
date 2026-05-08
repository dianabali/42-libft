/*
ft_ascii
Checks whether the given value is a valid ASCII character (0 - 127).
Returns 1 if the value is within the ASCII range and 0 otherwise.
Parameters:
	- c: the value to check.
*/

// #include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	printf("%d", ft_isascii('s'));
} */