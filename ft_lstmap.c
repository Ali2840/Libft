/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gocaetan <gocaetan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:08:57 by gocaetan          #+#    #+#             */
/*   Updated: 2025/05/01 18:08:18 by gocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void* to_uppercase(void *content)
{
	char	*str;
	char	*new_str;
	int		i;

	str = (char*)content;
	new_str = ft_strdup(str);
	i = 0;
	if(!new_str)
		return (NULL);
	while(new_str[i])
	{
		new_str[i] = ft_toupper(new_str[i]);
		i++;
	}
	return(new_str);
}

void	del_cont(void *content)
{
	free(content);
}
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*elem;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		if (!elem)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, elem);
		lst = lst->next;
	}
	return (new_lst);
}

/*
gcc -Wall -Werror
	-Wextra ft_lstnew.c ft_toupper.c ft_lstadd_back.c 
	ft_lstclear.c ft_strdup.c ft_lstlast.c 
	ft_lstdelone.c  ft_lstmap.c

int	main(void)
{
	t_list	*original;
	t_list	*mapped;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*tmp;

	original = NULL;
	mapped = NULL;
	node1 = ft_lstnew(ft_strdup("hello"));
	node2 = ft_lstnew(ft_strdup("world"));
	node3 = ft_lstnew(ft_strdup("libft"));
	if (!node1 || !node2 || !node3)
	{
		printf("Erro a criar nós.\n");
		return (1);
	}
	ft_lstadd_back(&original, node1);
	ft_lstadd_back(&original, node2);
	ft_lstadd_back(&original, node3);
	mapped = ft_lstmap(original, to_uppercase, del_cont);
	tmp = mapped;
	while(tmp)
	{
		printf("%s\n", (char*)tmp->content);
		tmp = tmp -> next;
	}
	ft_lstclear(&original, free);
	ft_lstclear(&mapped, free);
	return(0);
}
*/