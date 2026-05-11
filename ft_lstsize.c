/*
    ft_lstsize
    Count the number of elements in a list.
    Parameters:
        - lst: The beginning of the list.
    Return value:
        - The length of the list.
*/

#include "libft.h"
// #include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int	count; // Count the number of elements in the list

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next; // Move to the next element in the list
	}
	return (count);
}

/* int	main(void)
{
	t_list	*head;

	head = NULL;

	ft_lstadd_front(&head, ft_lstnew("aaa"));
	ft_lstadd_front(&head, ft_lstnew("bbb"));
	ft_lstadd_front(&head, ft_lstnew("ccc"));
	ft_lstadd_front(&head, ft_lstnew("ddd"));
	ft_lstadd_front(&head, ft_lstnew("eee"));

	printf("size: %d", ft_lstsize(head));
} */