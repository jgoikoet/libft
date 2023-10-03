/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:17:02 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/05/03 19:40:11 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (!lst)
		return (0);
	while (lst)
	{
		last = lst;
		lst = lst->next;
	}
	return (last);
}

/*t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *) malloc (sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

int	main(void)
{
	int	*content;
	t_list *node;
	t_list *head;
	int i;

	i = 0;
	content = (int *) malloc(sizeof(int));
	*content = i++;
	node = ft_lstnew(content);
	head = node;
	while (i < 10)
	{
		content = (int *) malloc(sizeof(int));
		*content = i;
		node->next = ft_lstnew(content);
		node = node->next;
		i++;
	}
	node = head;
	while (node)
	{
		printf("El contenido del nodo es: %d\n", *(int *)node->content);
		node = node->next;
	}
	node = head;
	printf("\nEl ultimo elemento de la lista es: %d\n", *(int *)\
	ft_lstlast(node)->content);
	//para liberar correctamente la memoria habria ke hacer un bucle
	//asignando un puntero temporal a node next y luego borrar el node.
	free(content);
	free(node);
	return (0);
}*/
