/*
    ft_strmapi
    Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3)) resulting from successive applications of ’f’.
    Returns the string created from the successive applications of ’f’ or NULL if the allocation fails.
    Parameters:
        c: The string on which to iterate.
        f: The function to apply to each character.
*/

#include "libft.h"
// #include <stdio.h>

/* char test_function_f(unsigned int i, char c)
{
    if (c>= 'a' && c <= 'z')
        return (c - 32);
    return (c);
} */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t length; // Length of the input string
    size_t i; // Index for iterating through the string
    char *result; // Pointer to hold the new string

    // Validate input parameters
    if (!s || !f)
        return (NULL);

    i = 0;
    length = ft_strlen(s); // Get the length of the input string
    result = (char *)malloc(sizeof(char) * (length + 1)); // Allocate memory for the new string including space for the null terminator
    
    // Check if memory allocation was successful
    if (!result)
        return (NULL);
    
    // Iterate through each character of the input string, apply the function 'f', and store the result in the new string
    while (i < length)
    {
        result[i] = f(i, s[i]);
        i++;
    }
    result[i] = '\0';
    return (result);
}

/* int main(void)
{
    char *str = "hello world";
    char *result = ft_strmapi(str, test_function_f);
    printf("str: %s\n", str);
    printf("result: %s\n", result);
    free(result);
    return (0);
} */
