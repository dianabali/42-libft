/*
    ft_putchar_fd
    Outputs the character ’c’ to the given file descriptor.
    Parameters:
        - c: The character to output.
        - fd: The file descriptor on which to write.
*/

#include "libft.h"
// #include <stdio.h>

void	ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

/* int main(void)
{
    ft_putchar_fd('A', 1);
    ft_putchar_fd('\n', 1);
    return 0;
} */