/*
    ft_strtrim
    Allocates and returns a copy of 's1' with the characters specified in 'set' removed from the beginning and the end of the string.
    Returns the trimmed string, or NULL if the allocation fails.
    Parameters:
        - s1: The string to be trimmed.
        - set: The set of characters to be removed.
*/

#include "libft.h"
// #include <stdio.h>

/**
    is_in_set
    Function to check if a character is in the 'set' string
    Parameters:
        - c: The character to check.
        - set: The string containing the characters to check against.
*/
static int  is_in_set(char c, char const *set)
{
    size_t	i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
    size_t	start;
    size_t	end;

    // Check for NULL input
    if (!s1 || !set)
        return (NULL);

    start = 0;
    end = ft_strlen(s1);

    // Move the start index forward while characters are in the set
    // Skip leading characters in 'set'
    while (s1[start] && is_in_set(s1[start], set))
        start++;

    // Move the end index backward while characters are in the set
    // Skip trailing characters in 'set'
    while (end > start && is_in_set(s1[end - 1], set))
        end--;

    // Return the trimmed string
    return (ft_substr(s1, start, end - start));
}

/* int main(void)
{
    char *s1 = "         hello world       ";
    char *set = " ";
    char *trimmed = ft_strtrim(s1, set);
    printf("original: <%s>\n", s1);
    printf("trimmed: <%s>\n", trimmed);
    free(trimmed);
    return 0;
} */