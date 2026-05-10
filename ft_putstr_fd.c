/*
    ft_putstr_fd
    Outputs the string ’s’ to the given file descriptor.
    Parameters:
        - s: The string to output.
        - fd: The file descriptor on which to write.
*/

#include "libft.h"
// #include <stdio.h>

void	ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    if (s == NULL)
        return ;
    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}

/* int main(void)
{
    char *str = "helloo\n";
    ft_putstr_fd(str, 1);
    return 0;
} */