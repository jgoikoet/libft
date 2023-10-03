/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:51:35 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/05/07 13:32:42 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*¿No se entrega ft_delet. Todavia no entiendo porke confiamos
en la funcion del para ke borre el contenido pero no para ke
borre el nodo?*/

/*void	ft_delet(void *nodo)
{
	free(nodo);
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
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
	int		*content;
	t_list	*node;
	t_list	*head;
	t_list	*del;
	int		i;

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
	del = head;
	del = del->next;
	del = del->next;
	ft_lstdelone(del, &ft_delet);
	node = head;
	while (node)
	{
		printf("El contenido del nodo es: %d\n", *(int *)node->content);
		node = node->next;
	}
	//para liberar correctamente la memoria habria ke hacer un bucle
	//asignando un puntero temporal a node next y luego borrar el node.
	//free(content);
	//free(node);
	return (0);
}*/
