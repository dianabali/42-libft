/*
ft_isprint
Checks whether the given character is printable.
Returns 1 if the character is printable and 0 otherwise.
Parameters:
	- c: the character to check.
*/

// #include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/* int	main(void)
{
	printf("%d", ft_isprint('D'));
} */
