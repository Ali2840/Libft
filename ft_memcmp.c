/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gocaetan <gocaetan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:09:23 by gocaetan          #+#    #+#             */
/*   Updated: 2025/04/29 18:22:52 by gocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	size_t			i;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return ((str1[i]) - (str2[i]));
		}
		i++;
	}
	return (0);
}
/*
int	main(void){
	char a [] = "Bora\0aaaa";
	char b [] = "Bora\0sigaa";
	size_t n = 3;
	int i = ft_memcmp(a, b, n);
	printf("%d\n", i);
}
	*/