/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamahdi <hamahdi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 15:12:29 by hamahdi           #+#    #+#             */
/*   Updated: 2024/02/01 23:04:05 by hamahdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	scount;
	size_t	dlen;

	if (!dst && !len)
		return (ft_strlen(src));
	dlen = ft_strlen(dst);
	if (dlen >= len)
		return (ft_strlen(src) + len);
	scount = 0;
	while (src[scount] != '\0' && dlen + 1 < len)
	{
		dst[dlen] = src[scount];
		scount++;
		dlen++;
	}
	dst[dlen] = '\0';
	return (ft_strlen(&src[scount]) + dlen);
}
