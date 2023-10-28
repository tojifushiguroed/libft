/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 20:14:03 by egolboyu          #+#    #+#             */
/*   Updated: 2023/10/27 23:08:35 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)str;
	i = 0;
	while (ptr[i] && ptr[i] != c && i < n)
		i++;
	if (ptr[i] == c)
		return ((void *)&ptr[i]);
	return (NULL);
}
