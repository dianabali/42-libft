#include "libft.h"
// #include <stdio.h>

/*
    count_chars_needed
    Calculates the number of characters needed to represent the given number as a string.

*/
static int  count_chars_needed(long number)
{
    int count;

    count = 0;

    // Handle negative numbers and zero
    if (number <= 0)
    {
        number = number * -1; // Make the number positive for counting digits
        count++;
    }

    // Count digits
    while (number > 0)
    {
        number = number / 10; // Remove the last digit from the number
        count++;
    }
    return (count);
}

/*
    fill_string
    Fills the provided string with the characters representing the given number.
*/
static char *fill_string(char *result, long number, int last_index)
{
    // Handle zero case
    if (number == 0)
    {
        result[0] = '0'; // Set the first character to '0'
        return (result);
    }

    // Handle negative numbers
    if (number < 0)
    {
         result[0] = '-'; // Set the first character to '-' for negative numbers
         number = number * -1;
    }

    // Fill the string with digits from the end
    while (number > 0)
    {
        result[last_index] = (number % 10) + '0'; // Convert the last digit to its character representation and store it in the result string
        number = number / 10; // Remove the last digit from the number
        last_index--;
    }
    return (result);
}

/*
    ft_itoa
    Converts an integer to a string representation.
    It calculates the number of characters needed, allocates memory for the string, and fills it with the appropriate characters.
    Returns a pointer to the resulting string, or NULL if memory allocation fails.
    Parameters:
        - n: The integer to be converted to a string.
*/
char	*ft_itoa(int n)
{
    char *str_result; // Pointer to hold the resulting string
    int str_length; // Variable to store the length of the resulting string
    long number; // Variable to hold the number being processed using long

    // Convert the input integer to long to handle the edge case of INT_MIN
    number = n;

    // Calculate the number of characters needed to represent the number as a string
    str_length = count_chars_needed(number);

    // Allocate memory for the resulting string, including space for the null terminator
    str_result = (char *)malloc(sizeof(char) * (str_length + 1));
    
    // Check if memory allocation was successful
    if (!str_result)
        return (NULL);

    str_result[str_length] = '\0';

    // Fill the string with the appropriate characters
    return (fill_string(str_result, number, str_length - 1));
}

/* int main()
{
    int number = -42;
    char *result = ft_itoa(number);
    printf("The string representation of %d is: %s\n", number, result);
    free(result);
    return 0;
} */
