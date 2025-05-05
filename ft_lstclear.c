/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gocaetan <gocaetan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:08:23 by gocaetan          #+#    #+#             */
/*   Updated: 2025/05/01 17:55:31 by gocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del_content(void *content)
{
	free(content);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}
/*
int main()
{
	t_list	*lst;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*tmp;

	lst = NULL;
	node1 = ft_lstnew(ft_strdup("Hello"));
	node2 = ft_lstnew(ft_strdup("world"));
	node3 = ft_lstnew(ft_strdup("42"));
	if (!node1 || !node2 || !node3)
	{
		printf("Erro a criar nós.\n");
		return (1);
	}
	ft_lstadd_back(&lst, node1);
	ft_lstadd_back(&lst, node2);
	ft_lstadd_back(&lst, node3);
	tmp = lst;
	printf("Lista antes de limpar:\n");
	while(tmp)
	{
		printf("%s\n", (char*)tmp->content);
		tmp = tmp -> next;
	}
	ft_lstclear(&lst, del_content);
	if(!lst)
		printf("Lista limpa com sucesso");
}
*/