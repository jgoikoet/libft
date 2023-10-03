/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 09:25:34 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/05/07 13:34:12 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	ft_delet(void	*content)
{
	free (content);
}*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (lst && del)
	{
		while (*lst)
		{
			temp = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = temp;
		}
	}
}

/*int	main(void)
{
	int		*content;
	t_list	*node;
	t_list	*head;
	t_list	*new;
	int		i;

	i = 10;
	content = (int *) malloc(sizeof(int));
	node = (t_list *) malloc (sizeof(t_list));
	head = node;
	*content = i++;
	node->content = content;
	while (i < 21)
	{
		new = (t_list *) malloc (sizeof(t_list));
		content = (int *) malloc (sizeof(int));
		*content = i;
		new->content = content;
		node->next = new;
		node = node->next;
		i++;
	}
	new = (t_list *) malloc (sizeof(t_list));
	content = (int *) malloc (sizeof(int));
	new->content = NULL;
	node = new;
	node = head;
	node = node->next;
	node = node->next;
	node = node->next;
	ft_lstclear(&node, &ft_delet);
	node = head;
	while (node)
	{
		printf("El contenido del nodo es: %d\n", *(int *)node->content);
		node = node->next;
	}
	//node = node->next;
	//printf("El contenido del nodo es: %d\n", *(int *)node->content);
	//para liberar correctamente la memoria habria ke hacer un bucle
	//asignando un puntero temporal a node next y luego borrar el node.
	free(content);
	free(node);
	return (0);
}*/
