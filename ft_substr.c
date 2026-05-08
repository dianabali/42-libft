/*
    ft_substr.c
    Allocates and returns a substring from the string 's'.
    The substring starts at index 'start' and has a max length of 'len'.
    Returns:
        - The substring.
        - NULL if the allocation fails.
        - An empty string if 'start' is greater than the length of 's'.
    Parameters:
        - s: The string from which to create the substring.
        - start: The index of the first character of the substring in 's'.
        - len: The maximum length of the substring.
*/

#include "libft.h"
// #include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substr;
    size_t  s_len;

    // Handle NULL input
    if (!s)
        return (NULL);

    // Get the length of s
    s_len = ft_strlen(s);

    // If start is beyond the end of s, return an empty string
    if (s_len < start)
    {
        substr = (char *)malloc(sizeof(char) * 1);
        if (!substr)
            return (NULL);
        substr[0] = '\0';
        return (substr);
    }

    // Adjust len if it exceeds the remaining length of s from start
    if (len > s_len - start) 
        len = s_len - start;

    // Allocate memory for the substring (+1 for null terminator)
    substr = (char *)malloc(sizeof(char) * (len + 1));
    if (!substr)
        return (NULL);
    
    // Copy the substring and null-terminate it
    ft_memcpy(substr, s + start, len);
    substr[len] = '\0';
    return (substr);
}

/* int main(void)
{
    printf("substr1 (success): %s\n", ft_substr("helloworld", 5, 5));
    printf("substr1 (null): %s\n", ft_substr("helloworld", 30, 5));
    printf("substr2 (len > s_len): %s\n", ft_substr("helloworld", 7, 30));
    free(ft_substr("helloworld", 5, 5));
    free(ft_substr("helloworld", 30, 5));
    free(ft_substr("helloworld", 7, 30));
    return (0);
} */