/* 
    ft_lstlast
    Iterates the list lst and returns the last node.
    If the list is empty, returns NULL.
    Parameters:
        - lst: The beginning of the list.
*/

#include "libft.h"
// #include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next) // For as long as there is a next node, move to the next node
		lst = lst->next; // Move to the next node
	return (lst); // Return the last node
}

/* int	main(void)
{
	t_list	*head;
	t_list	*last;

	head = NULL;

	ft_lstadd_front(&head, ft_lstnew("aaa"));
	ft_lstadd_front(&head, ft_lstnew("bbb"));
	ft_lstadd_front(&head, ft_lstnew("ccc"));
	ft_lstadd_front(&head, ft_lstnew("ddd"));
	ft_lstadd_front(&head, ft_lstnew("eee"));
	
	last = ft_lstlast(head);

	if (last)
		printf("last elem: %s", (char *)last->content);
	return (0);
} */