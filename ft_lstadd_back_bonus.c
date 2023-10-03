/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:29:43 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/05/07 13:27:12 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = NULL;
	if (lst)
		temp = *lst;
	if (temp && new)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	else if (lst && new)
		*lst = new;
}
/*if (lst)
{  Esto es mas efectivo por usar lstlast que ya esta hecho
	pero queria hacerlo a mi manera.
	if (*lst)
	{
		temp = ft_lstlast(*lst);
		temp->next = new;
	}
	else
		*lst = new;
}*/

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
	t_list	*new;
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
	content = (int *) malloc(sizeof(int));
	*content = 2211;
	new = (t_list *) malloc (sizeof(t_list));
	if (new == NULL)
		return (0);
	new = ft_lstnew(content);
	node = head;
	ft_lstadd_back(&node, new);
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
