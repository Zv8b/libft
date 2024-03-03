/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamahdi <hamahdi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 16:58:51 by hamahdi           #+#    #+#             */
/*   Updated: 2024/02/01 23:12:46 by hamahdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			negative;
	long		index;
	long long	longvalue;

	negative = 1;
	index = 0;
	while (*str && ((*str >= '\t' && *str <= '\r') || *str == ' '))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative *= -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		longvalue = index;
		index = index * 10 + negative * (*str - 48);
		if (index > longvalue && negative < 0)
			return (0);
		if (index < longvalue && negative > 0)
			return (-1);
		str++;
	}
	return (index);
}
