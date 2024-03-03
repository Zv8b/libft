/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamahdi <hamahdi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 23:42:33 by hamahdi           #+#    #+#             */
/*   Updated: 2024/01/13 22:04:01 by hamahdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			slen;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if ((size_t)start >= slen)
	{
		str = malloc(1);
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (len > slen - start)
		len = slen - start;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	ft_memcpy(str, s + start, len);
	str[len] = '\0';
	return (str);
}
