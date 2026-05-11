/*
    ft_lstadd_front
    Adds the element ’new’ at the beginning of the list.
    Parameters:
        - lst: The address of a pointer to the first node of a list.
        - new: The address of a pointer to the element to be added to the list.
*/

#include "libft.h"
// #include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new->next = *lst; // "The next pointer of the new node will point to the current first node of the list"
		*lst = new; // The head of the list will point to the new node
	}
}

/* int	main(void)
{
	t_list	*head;
	t_list *new_node;

	head = ft_lstnew("world");
	new_node = ft_lstnew("hello ");

	ft_lstadd_front(&head, new_node);

	while (head)
	{
		printf("%s", (char *)head->content);
		head = head->next;
	}
	return (0);
} */