#include "libft.h"
// #include <stdio.h>

/* 
    count_words
    Counts how many words wxisting in the string 's' separated bz 'c'.
*/
static int  count_words(const char *s, char c)
{
    int count = 0; // Counter for the number of words
    int in_word = 0; // Flag to indicate if we are currently in a word

    while (*s)
    {
        if (*s != c && !in_word)
        {
            in_word = 1;
            count++;
        }
        else if (*s == c)
            in_word = 0;
        s++;
    }
    return count;
}

/*
    split_words
    Allocates memory and copies a word from the string 's' until it reaches the separator 'c' or the end of the string.
*/
static char *split_words(const char *s, char c)
{
    int len; // Length of the word
    int i; // Index for iterating through the word
    
    len = 0;
    
    // Calculate the length of the word
    while (s[len] && s[len] != c)
        len++;

    // Allocate memory for the word and copy it
    char *word = (char *)malloc(len + 1);
    if (!word)
        return NULL;
    
    // Copy the word into the allocated memory
    i = 0;
    while (i < len)
    {
        word[i] = s[i];
        i++;
    }
    word[len] = '\0';
    return word;
}

/*
    ft_split
    Splits the string 's' into an array of strings using the separator 'c'. The array is terminated by a NULL pointer.
    Returns a pointer to the array of strings, or NULL if the allocation fails.
    Parameters:
        - s: The string to be split.
        - c: The character used as a separator.
*/
char	**ft_split(char const *s, char c)
{
    int word_count; // Count the number of words in the string
    char **words; // Array of strings to store the words
    int i; // Index for iterating through the array of words
    
    if (!s)
        return NULL;
    word_count = count_words(s, c);

    // Allocate memory for the array of strings, including for the NULL terminator
    words = (char **)malloc((word_count + 1) * sizeof(char *));
    if (!words)
        return NULL;

    i = 0;
    while (i < word_count)
    {
        // Skip delimiters
        while (*s == c)
            s++;
        // Extract the word and store it in the array
        words[i] = split_words(s, c);

        // If memory allocation for the word fails, free previously allocated memory and return NULL
        if (!words[i])
        {
            while (i >= 0)
                free(words[--i]);
            free(words);
            return NULL;
        }
        // Move to the next word
        while (*s && *s != c)
            s++;
        i++;
    }
    words[word_count] = NULL; // Null-terminate the array of strings
    return words;
}

/* int main(void)
{
    char **result = ft_split("hello world aaaaa bbb cc xrrrnfjnjvnjfjv", ' ');
    for (int i = 0; result[i] != NULL; i++)
    {
        printf("%s\n", result[i]);
        free(result[i]);
    }
    free(result);
    return 0;
} */