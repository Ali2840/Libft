/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gocaetan <gocaetan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:08:16 by gocaetan          #+#    #+#             */
/*   Updated: 2025/04/29 16:08:19 by gocaetan         ###   ########.fr       */
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
/*
int	main(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*current;

	list = NULL;
	node1 = ft_lstnew("First");
	node2 = ft_lstnew("Second");
	if(!node1 || !node2)
		printf("Erro ao criar nos. \n");
	list = node1;
	ft_lstadd_front(&list , node2);
	current = list;
	while (current)
	{
		printf("Conteúdo: %s\n", (char *)current->content);
		current = current->next;
	}
	free(node1);
	free(node2);
	return (0);
}
	*/