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

int	ft_memcmp(const void *dest, const void *src, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)dest != *(unsigned char *)src)
			return (*(unsigned char *)dest - *(unsigned char *)src);
		++dest;
		++src;
	}
	return (0);
}
