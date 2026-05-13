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
    free_words
    Frees all already-created words and then frees the array itself.
*/
static void	free_words(char **words, int i)
{
	while (i > 0)
		free(words[--i]); //
	free(words);
}

/*
    fill_words
    Skips delimiters, extracts words, and stores them in the 'words' array.
*/
static int	fill_words(char **words, const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c) // Skip delimiters
			s++;
		if (*s)
		{
			words[i] = split_words(s, c); // Extracts words
			if (!words[i])
				return (free_words(words, i), 0); // Handle allocation failure (comma operator - call free_words() and return (0)
			i++;
		}
		while (*s && *s != c) // "Move until the word ends"
			s++;
	}
	words[i] = NULL; // Add the ending of the array
	return (1);
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
	int		word_count; // Count the words in the string
	char	**words; // Array of strings to store the words

    // Check for NULL input
	if (!s)
		return (NULL);

    // Count how many words are in the string
	word_count = count_words(s, c);

    // Allocate memory for the array
	words = (char **)malloc((word_count + 1) * sizeof(char *));

	if (!words) // For memory allocation failure
		return (NULL);
    // Fill the array with extracted words
	if (!fill_words(words, s, c)) // If array build fails
		return (NULL);
	return (words); 
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
