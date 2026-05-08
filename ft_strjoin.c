/*
    ft_strjoin
    Allocates and returns a new string which is the result of the concatenation of ’s1’ and ’s2’.
    Returns the new string, or NULL if the allocation fails.
    Parameters:
        - s1: The first string.
        - s2: The second string.
*/

#include "libft.h"
// #include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
    size_t    len_s1;
    size_t    len_s2;
    char    *new_str;

    // Check if either s1 or s2 is NULL
    if (!s1 || !s2)
        return (NULL);

    // Calculate the lengths of s1 and s2
    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);

    // Allocate memory for the new string (length of s1 + length of s2 + 1 for null terminator)
    new_str = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
    if (!new_str)
        return (NULL);
    
    // Copy s1 and s2 into the new string
    ft_memcpy(new_str, s1, len_s1); // Copy s1 to new_str
    ft_memcpy(new_str + len_s1, s2, len_s2); // Copy s2 to new_str right after s1
    new_str[len_s1 + len_s2] = '\0';
    return (new_str);
}

/* int main(void)
{
    char *s1 = "hello ";
    char *s2 = "world";
    char *result = ft_strjoin(s1, s2);
    printf("%s\n", result);
    free(result);
    return (0);
} */