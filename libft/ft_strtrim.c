/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamahdi <hamahdi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:44:10 by hamahdi           #+#    #+#             */
/*   Updated: 2024/01/12 18:50:44 by hamahdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_trim(char c, char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *str1, char const *str2)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	if (!str1 || !str2)
		return (0);
	start = 0;
	while (str1[start] && ft_trim(str1[start], str2))
		start++;
	end = ft_strlen(str1);
	while (end > start && ft_trim(str1[end - 1], str2))
		end--;
	str = (char *)malloc(sizeof(*str1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = str1[start++];
	str[i] = 0;
	return (str);
}
