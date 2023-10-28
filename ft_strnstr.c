/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:19:07 by egolboyu          #+#    #+#             */
/*   Updated: 2023/10/27 23:09:52 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dest, const char *src, size_t len)
{
	char		*tmp;
	size_t		i;

	i = 0;
	while (*dest && i < len)
	{
		if (*dest == *src)
			tmp = (char *)dest;
		while (i < len && (*dest == *src))
		{
			dest++;
			src++;
			i++;
		}
		dest++;
		i++;
	}
	if (*src == '\0')
		return (tmp);
	return (NULL);
}
