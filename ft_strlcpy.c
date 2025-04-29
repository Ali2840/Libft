/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gocaetan <gocaetan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:11:27 by gocaetan          #+#    #+#             */
/*   Updated: 2025/04/29 16:11:28 by gocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	i = 0;
	if (src_len + 1 < size)
	{
		while (src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	else if (size != 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
/*
int	main(void){
	char dest [30];
	char src[30] = "42 lisbon";
	size_t i;
	size_t size = 10;
	i = ft_strlcpy(dest, src, size);
	printf("%zu\n", i);
	printf("%s\n", dest);
}
*/