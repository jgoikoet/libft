/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:41:22 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/05/07 13:36:29 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	ft_mult(void *cont)
{
	*(int *)cont = *(int *)cont * 100 + 5;
}*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
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
	int	*content; // Crea un nuevo nodo con un entero como contenido
	t_list *node;
	t_list *head;
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
	node = head;
	ft_lstiter(node, &ft_mult);
	printf("\n");
	node = head;
	while (node)
	{
		printf("El contenido del nodo es: %d\n", *(int *)node->content);
		node = node->next;
	}
	//para liberar correctamente la memoria habria ke hacer un bucle
	//asignando un puntero temporal a node next y luego borrar el node.
	free(content);
	free(node);
	return (0);
}*/
