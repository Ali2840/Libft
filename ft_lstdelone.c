/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gocaetan <gocaetan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:08:28 by gocaetan          #+#    #+#             */
/*   Updated: 2025/05/05 18:28:49 by gocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	del_content(void *content)
{
	printf("A apagar conteudo: %s\n", (char *)content);
	free(content);
}
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
int	main(void)
{
	t_list	*node;

	node = ft_lstnew(ft_strdup("Hello"));
	if(!node)
		printf("erro ao criar o no");
	ft_lstdelone(node, del_content);
	return (0);
}
*/