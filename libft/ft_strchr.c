/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamahdi <hamahdi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 15:27:43 by hamahdi           #+#    #+#             */
/*   Updated: 2024/01/31 23:10:43 by hamahdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	my_c;

	my_c = (char)c;
	while (*s)
	{
		if (*s == my_c)
			return ((char *)s);
		s++;
	}
	if (my_c == '\0')
		return ((char *)s);
	return (NULL);
}
