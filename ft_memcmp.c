/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 20:13:59 by egolboyu          #+#    #+#             */
/*   Updated: 2023/10/27 23:09:01 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (dest[i] && i <= n && dest[i] == src[i])
		i++;
	return (dest[i] - src[i]);
}
