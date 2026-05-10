/*
    ft_putendl_fd
    Outputs the string ’s’ to the given file descriptor followed by a newline.
    Parameters:
        - s: The string to output.
        - fd: The file descriptor on which to write.
*/

#include "libft.h"
// #include <stdio.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/* int main(void)
{
    ft_putendl_fd("helloo", 1);
    return (0);
} */