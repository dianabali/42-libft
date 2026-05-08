/*
ft_atoi
Converts a string representation of a number into an integer.
Returns the converted integer value.
Parameters:
  - nptr: the string to convert.
*/

// #include <stdio.h>
// #include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;

  // Skip spaces, tabs, newlines, vertical tabs, form feeds, carriage returns
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;

  // Handle optional sign
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}

  // Convert to integers
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = (result * 10) + (*nptr - '0');
		nptr++;
	}
	return (sign * result);
}

/* int	main(void)
{
	char num[] = "50";
	printf("func: %d\n", atoi(num));
	printf("myfunc: %d\n", ft_atoi(num));
} */
