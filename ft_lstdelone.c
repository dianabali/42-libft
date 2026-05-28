/*
    ft_lstdelone
    Deletes the content of a node using the function del and frees the node.
    Parameters:
        - lst: The node to delete.
        - del: The function used to delete the content of the node.
*/

#include "libft.h"
// #include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content); // Delete the content of the node
		free(lst); // Free the memory allocated for the node itself
		lst = NULL; // Set the pointer to NULL to avoid dangling pointer issues
	}
}

void	del_content(void *content)
{
	free(content);
}

/* int	main(void)
{
	t_list	*node;
	char	*str;

	str = ft_strdup("hello world");
	node = ft_lstnew(str);

	printf("before: %s\n", (char *)node->content);

	ft_lstdelone(node, del_content);

	printf("after: %s\n", (char *)node->content); // seg fault
	return (0);
} */
