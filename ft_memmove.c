/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gocaetan <gocaetan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:09:40 by gocaetan          #+#    #+#             */
/*   Updated: 2025/04/29 18:28:57 by gocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_str;
	unsigned char	*src_str;

	i = 0;
	if (!dest && !src)
		return (NULL);
	dest_str = (unsigned char *)dest;
	src_str = (unsigned char *)src;
	if (dest < src)
	{
		while (i < n)
		{
			dest_str[i] = src_str[i];
			i++;
		}
	}
	else
	{
		while (n--)
			dest_str[n] = src_str[n];
	}
	return (dest);
}

/*
int	main(void){
	char str1[30] = "1234567890";
	char str2[30] = "1234567890";

	printf("Antes (original):  %s\n", str1);
	memmove(str1 + 4, str1 + 2, 4); // memmove oficial
	printf("Depois (memmove):  %s\n", str1);

	printf("Antes (ft_memmove):    %s\n", str2);
	ft_memmove(str2 + 4, str2 + 2, 4);
	printf("Depois (ft_memmove): %s\n", str2);
}
*/
