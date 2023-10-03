/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:30:58 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/05/07 12:57:03 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
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
		printf("nodo es: %d\n", *(int *)node->content);
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
	//OJO LINEA PARTIDA
	printf("\nla longitud de la lista es de : %i elementos\n", 
	ft_lstsize(node));
	//para liberar correctamente la memoria habria ke hacer un bucle
	//asignando un puntero temporal a node next y luego borrar el node.
	free(content);
	free(node);
	return (0);
}*/
