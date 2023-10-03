/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:46:19 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/05/07 13:38:41 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	ft_dlt(void *cont)
{
	if (*(int *)cont > 1600)
		free(cont);
}

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *) malloc (sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	*ft_mult(void *cont)
{
	t_list	*temp;

	temp = (t_list *) malloc (sizeof(t_list));
	*(int *)cont = *(int *)cont * 100 + 5;
	temp->content = cont;
	return (temp->content);
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;
	void	*temp;

	head = NULL;
	while (lst && f && del)
	{
		temp = f(lst->content);
		new = ft_lstnew(temp);
		if (!new)
		{
			free (temp);
			ft_lstclear(&new, del);
		}
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
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
	new = ft_lstmap(node, &ft_mult, &ft_dlt);
	printf("\n");
	while (new)
	{
		printf("El contenido de new final es: %d\n", *(int *)new->content);
		new = new->next;
	}
	//para liberar correctamente la memoria habria ke hacer un bucle
	//asignando un puntero temporal a node next y luego borrar el node.
	//free(content);
	//free(node);
	return (0);
}*/
