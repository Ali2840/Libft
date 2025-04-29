/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gocaetan <gocaetan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:58:00 by gocaetan          #+#    #+#             */
/*   Updated: 2025/04/29 16:32:58 by gocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long	result;
	char	*str;

	result = 0;
	sign = 1;
	i = 0;
	str = (char *)nptr;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}

/*
int	main(void)
{
	int		i;
	int		a;
	char	str[] = "   ------++++1234ab567";

	i = ft_atoi(str);
	a = atoi(str);
	printf("%d\n", i);
	printf("%d\n", a);
}
*/