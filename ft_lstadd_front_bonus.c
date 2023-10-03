/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:13:28 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/05/07 12:51:12 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
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
	t_list	*new;
	int i;

	i = 10;
	content = (int *) malloc(sizeof(int));
	*content = i++;
	node = ft_lstnew(content);
	head = node;
	while (i < 21)
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
	content = (int *) malloc(sizeof(int));
	*content = 8215;
	node = head;
	new = (t_list *) malloc (sizeof(t_list));
	new->content = content;
	head = new;
	ft_lstadd_front(&node, new);
	node = head;
	printf("\n");
	while (node)
	{
		printf("Nodo tras añadir new es: %d\n", *(int *)node->content);
		node = node->next;
	}
	//para liberar correctamente la memoria habria ke hacer un bucle
	//asignando un puntero temporal a node next y luego borrar el node.
	free(content);
	free(node);
	return (0);
}*/
