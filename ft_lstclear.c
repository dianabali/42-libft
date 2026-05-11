/*
    ft_lstclear
    Deletes and frees the given element and every successor of that element.
    Parameters:
        - lst: The address of a pointer to an element.
        - del: The address of the function used to delete the content of the element.
*/

#include "libft.h"
// #include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next; // Pointer to the next element in the list
	t_list	*current; // Pointer to the current element being processed

	if (lst && del)
	{
		current = *lst; // Start with the first element of the list
		while (current)
		{
			next = current->next; // Store the next element before deleting the current one
			del(current->content); // Use the 'del' function to free the content of the current element
			free(current); // Free the current element itself
			current = next; // Move to the next element in the list
		}
		*lst = NULL; // Set the original list pointer to NULL to indicate that the list has been cleared
	}
}

/* void	del_content(void *content)
{
	free(content);
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

	printf("before: \n");
	while (head)
	{
		printf("%s\n", (char *)head->content);
		head = head->next;
	}

	ft_lstclear(&head, del_content);
	
	if (head == NULL)
		printf("\ndeleted");
} */