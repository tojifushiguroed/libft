/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:22:48 by egolboyu          #+#    #+#             */
/*   Updated: 2023/10/28 20:02:18 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (str[i] != '\0')
	{
		while (str[i] && str[i] != c)
			i--;
		if (str[i] == c)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}
