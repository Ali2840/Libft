/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gocaetan <gocaetan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:08:07 by gocaetan          #+#    #+#             */
/*   Updated: 2025/04/29 16:08:12 by gocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
int	main(void)
{
	t_list	*lst;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*new;
	t_list	*last;

	lst = NULL;
	node1 = ft_lstnew("First");
	node2 = ft_lstnew("Second");
	node3 = ft_lstnew("Third");
	new = ft_lstnew("Fourth");
	if (!node1 || !node2 || !node3)
	{
		printf("Erro a criar nós.\n");
		return (1);
	}
	ft_lstadd_front(&lst, node1);
	ft_lstadd_front(&lst, node2);
	ft_lstadd_front(&lst, node3);
	ft_lstadd_back(&lst, new);
	last = ft_lstlast(lst);
	printf("the new node is: %s", (char*) last -> content);
}
	*/