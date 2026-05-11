/*
    ft_lstiter
    Iterates the list ’lst’ and applies the function ’f’ to the content of each node.
    Parameters:
        - lst: The address of a pointer to a node.
        - f: The address of the function used to iterate on the list.
*/

#include "libft.h"
// #include <stdio.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content); // Apply the function 'f' to the content of the current node
			lst = lst->next; // Move to the next node in the list
		}
	}
}

/* void	test_func_print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list	*head;
	
	head = NULL;

	ft_lstadd_front(&head, ft_lstnew("aaa"));
	ft_lstadd_front(&head, ft_lstnew("bbb"));
	ft_lstadd_front(&head, ft_lstnew("ccc"));
	ft_lstadd_front(&head, ft_lstnew("ddd"));
	ft_lstadd_front(&head, ft_lstnew("eee"));

	ft_lstiter(head, test_func_print_content);
	return (0);
} */