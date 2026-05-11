/*
    ft_lstadd_back
    Adds the element ’new’ at the end of the list.
    Parameters:
        - lst: The beginning of the list.
        - new: The element to add at the end of the list.
*/

#include "libft.h"
// #include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current; // The current node we are looking at in the list

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new; // If the list is empty, we set the head of the list to the new node
	else
	{
		current = *lst; // Start at the head of the list
		while (current->next) // Traverse the list until we find the last node (where next is NULL)
			current = current->next; // Move to the next node
		current->next = new; // Set the next pointer of the last node to the new node
	}
}

/* int	main(void)
{
	t_list	*head;

	head = NULL;

	ft_lstadd_front(&head, ft_lstnew("aaa "));
	ft_lstadd_front(&head, ft_lstnew("bbb "));
	ft_lstadd_front(&head, ft_lstnew("ccc "));

	while (head)
	{
		printf("%s", (char *)head->content);
		head = head->next;
	}
	return (0);
} */