/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gocaetan <gocaetan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:11:20 by gocaetan          #+#    #+#             */
/*   Updated: 2025/05/01 18:19:43 by gocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n);

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(dst);
	while (src[i] && i < n)
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (dst);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_size;
	size_t	dst_size;

	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	if (size == 0)
		return (src_size);
	if (size <= dst_size)
		return (size + src_size);
	ft_strncat(dst, src, size - dst_size - 1);
	return (dst_size + src_size);
}

/*
int	main(void)
{
	char	dest[30] = "42 ";
	char	src[30] = "lisbon";
	size_t	i;
	size_t	size;

	// size_t j;
	size = 10;
	i = ft_strlcat(dest, src, size);
	printf("%zu\n", i);
	printf("%s\n", dest);
	// j = strlcat(dest, src, size);
	// printf("%zu\n", j);
	// printf("%s\n", dest);q
}
*/