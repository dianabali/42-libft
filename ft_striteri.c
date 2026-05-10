/*
    ft_striteri
    Applies the function ’f’ on each character of the string passed as argument.
    Parameters:
        - s: The string to iterate.
        - f: The function to apply to each character.
*/

// #include <stdio.h>

/* void test_function_f(unsigned int i, char *c)
{
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;
} */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    i = 0;
    if (!s || !f)
        return ;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

/* int main(void)
{
    char str[] = "hello world";
    printf("str: %s\n", str);
    ft_striteri(str, test_function_f);
    printf("result: %s\n", str);
    return (0);
} */