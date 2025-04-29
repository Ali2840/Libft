/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gocaetan <gocaetan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:28:52 by gocaetan          #+#    #+#             */
/*   Updated: 2025/04/29 16:09:13 by gocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	t_list	*lst;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	int		size;

	lst = NULL;
	node1 = ft_lstnew("First");
	node2 = ft_lstnew("Second");
	node3 = ft_lstnew("Third");
	if (!node1 || !node2 || !node3)
	{
		printf("Erro a criar nós.\n");
		return (1);
	}
	ft_lstadd_front(&lst, node1);
	ft_lstadd_front(&lst, node2);
	ft_lstadd_front(&lst, node3);
	size = ft_lstsize(lst);
	printf("O numero de nos da lista e: %d\n", size);
	free(node1);
	free(node2);
	free(node3);
}
	*/