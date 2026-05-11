/*
    ft_lstmap
    Iterates the list ’lst’ and applies the function ’f’ to the content of each element.
    Creates a new list resulting of the successive applications of the function ’f’.
    Parameters:
        - lst: Pointer to an element.
        - f: The function used to iterate on the list.
        - del: The function used to delete the content of each element.
*/

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst; // Pointer to the new list
	t_list	*new_node; // Pointer to the new node created with the content of the current node of the original list after applying the function f

	if (!lst || !f)
		return (NULL);
	new_lst = NULL; // Initialize the new list to NULL
	new_node = NULL; // Initialize the new node to NULL
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content)); // Create a new node with the content of the current node of the original list after applying the function f
		if (!new_node)
		{
			ft_lstclear(&new_lst, del); // If the new node is NULL, clear the new list and return NULL
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node); // Add the new node to the back of the new list
		lst = lst->next; // Move to the next node of the original list
	}
	return (new_lst);
}

/* void	*dup_content(void *content)
{
	return (strdup((char *)content));
}

void	print_content(void *content)
{
	if (content)
	    printf("%s\n", (char *)content);
}

void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *lst = NULL;
	t_list *new_lst = NULL;

	ft_lstadd_front(&lst, ft_lstnew("hello"));
	ft_lstadd_front(&lst, ft_lstnew("world"));

	printf("before:\n");
	ft_lstiter(lst, print_content);

	new_lst = ft_lstmap(lst, dup_content, del_content);

	printf("\nafter:\n");
	ft_lstiter(new_lst, print_content);

	ft_lstclear(&lst, del_content);
	ft_lstclear(&new_lst, del_content);
	return (0);
} */