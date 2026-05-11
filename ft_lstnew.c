/*
    ft_lstnew
    Allocates and returns a new element of the list.
    The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.
    Parameters:
        - content: The content to create the new element with.
    Return value:
        - A pointer to the new element or NULL if the allocation fails.
*/

#include "libft.h"
// #include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*node; // Pointer to the new node

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content; // Set the content of the new node
	node->next = NULL; // Initialize the next pointer to NULL
	return (node);
}

/* int	main(void)
{
	char str[] = "hello world";
	t_list *new_node;
	
	new_node = ft_lstnew(str);
	printf("content: %s\n", (char *)new_node->content);
	free(new_node);
} */