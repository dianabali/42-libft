/*
    ft_putnbr_fd
    Outputs the integer ’n’ to the given file descriptor.
    Parameters:
        - n: The integer to output.
        - fd: The file descriptor on which to write.
*/

#include "libft.h"
// #include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
    long int number;

    number = n; // To handle the case when n is INT_MIN we need to use a long int
    if (number < 0)
    {
        ft_putchar_fd('-', fd); // Output the negative sign if the number is negative
        number = number * -1; // Make the number positive for further processing
    }
    if (number >= 10)
        ft_putnbr_fd(number / 10, fd); // Recursively call the function with the number divided by 10 to process the next digit
    ft_putchar_fd(number % 10 + '0', fd); // Output the last digit of the number by taking the modulus with 10 and converting it to a character
}

/* int main(void)
{
    ft_putnbr_fd(555, 1);
    ft_putchar_fd('\n', 1);
    return (0);
} */