/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:04:39 by egolboyu          #+#    #+#             */
/*   Updated: 2023/10/27 23:08:16 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while ((dest[i] && src[i]) && i < n && dest[i] == src[i])
		i++;
	if (i == n)
		i--;
	if (n == 0)
		return (0);
	return ((unsigned char)dest[i] - (unsigned char)src[i]);
}
