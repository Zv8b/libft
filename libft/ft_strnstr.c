/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamahdi <hamahdi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 16:46:49 by hamahdi           #+#    #+#             */
/*   Updated: 2024/01/13 22:03:41 by hamahdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hays, const char *needle, size_t len)
{
	size_t	hay_len;
	size_t	need_len;

	if (*needle == '\0' )
		return ((char *)hays);
	if (len == 0)
		return (NULL);
	hay_len = ft_strlen(hays);
	need_len = ft_strlen(needle);
	if (hay_len < need_len || len < need_len)
		return (NULL);
	while (len-- >= need_len && *hays)
	{
		if (ft_memcmp(hays, needle, need_len) == 0)
			return ((char *)hays);
		hays++;
	}
	return (NULL);
}
