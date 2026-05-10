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

    number = n;
    if (number < 0)
    {
        ft_putchar_fd('-', fd);
        number = number * -1;
    }
    if (number >= 10)
        ft_putnbr_fd(number / 10, fd);
    ft_putchar_fd(number % 10 + '0', fd);
}

/* int main(void)
{
    ft_putnbr_fd(555, 1);
    ft_putchar_fd('\n', 1);
    return (0);
} */