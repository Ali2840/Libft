/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gocaetan <gocaetan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:44:15 by gocaetan          #+#    #+#             */
/*   Updated: 2025/04/29 16:25:39 by gocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		countword(const char *s, char c);
void	*allocate_word(const char *s, int start, int end);
void	*ft_free(char **strs, int count);

int	countword(const char *s, char c)
{
	int	i;
	int	countword;

	i = 0;
	countword = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			countword++;
		i++;
	}
	return (countword);
}

void	*allocate_word(const char *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

void	*ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

void	ft_initvar(int *i, int *word_index, int *word_start)
{
	*i = 0;
	*word_index = 0;
	*word_start = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**bi_array;
	int		i;
	int		word_index;
	int		word_start;

	ft_initvar(&i, &word_index, &word_start);
	bi_array = ft_calloc(countword(s, c) + 1, sizeof(char *));
	if (!s || !bi_array)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			word_start = i;
			while (s[i] && s[i] != c)
				i++;
			bi_array[word_index] = allocate_word(s, word_start, i);
			if (!bi_array[word_index])
				return (ft_free(bi_array, word_index));
			word_index++;
		}
		else
			i++;
	}
	return (bi_array);
}
/*
int	main(void)
{
	char	*s;
	char	**split;
	int		i;

	s = "            O meu               nome e goncalo           ";
	split = ft_split(s, ' ');
	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
}
*/