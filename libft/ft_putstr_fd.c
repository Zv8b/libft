/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamahdi <hamahdi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:03:45 by hamahdi           #+#    #+#             */
/*   Updated: 2024/01/08 20:30:22 by hamahdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)

{
	if (s == NULL || fd < 0)
		return ;
	write (fd, s, ft_strlen(s));
}
