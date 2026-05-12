/*
ft_memcmp
Compares the first 'n' bytes of two memory areas.
Returns:
	- 0 if the memory areas are identical.
	- A negative value if the first differing byte in s1 is smaller than the corresponding byte in s2.
	- A positive value if the first differing byte in s1 is greater than the corresponding byte in s2.
Parameters:
	- s1: pointer to the first memory block.
	- s2: pointer to the second memory block.
	- n: the number of bytes to compare.
*/

// #include <stdio.h>
// #include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*pstr1;
	const unsigned char	*pstr2;

	// Cast pointers for byte-to-byte comparison
	pstr1 = s1;
	pstr2 = s2;
	while (n--) // Iterate until n = 0
	{
		if (*pstr1 != *pstr2) // Compare the values
			return (*pstr1 - *pstr2); // Return the difference
		pstr1++;
		pstr2++;
	}
	return (0);
}

/* int	main(void)
{
	char str1[] = "1";
	char str2[] = "1";

	printf("func: %d\n", memcmp(str1, str2, 1));
	printf("myfunc: %d\n", ft_memcmp(str1, str2, 1));
} */
