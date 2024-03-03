/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamahdi <hamahdi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:10:58 by hamahdi           #+#    #+#             */
/*   Updated: 2024/01/08 18:16:33 by hamahdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*ptr;

	if (size && SIZE_MAX / size < count)
	{
		return (NULL);
	}
	i = count * size;
	ptr = malloc(i);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, i);
	return (ptr);
}
