/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gocaetan <gocaetan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:09:04 by gocaetan          #+#    #+#             */
/*   Updated: 2025/04/29 16:09:06 by gocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = malloc(sizeof(t_list));
	if (!element)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}
/*
int	main(void)
{
	t_list	*node;

	node = ft_lstnew("Hello");
	if (!node)
		printf("Erro ao criar o no");
	printf("Conteudo do no: %s\n", (char *)node->content);
	free(node);
	return (0);
}
*/