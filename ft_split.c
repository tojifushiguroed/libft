/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 13:53:27 by egolboyu          #+#    #+#             */
/*   Updated: 2023/10/28 17:00:08 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_looklen(const char *s, char c)
{
	size_t	line;

	line = 0;
	while (*s)
	{
		if (*s != c)
		{
			++line;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (line);
}

char	**ft_split(const char *s, char c)
{
	char	**line;
	size_t	len;

	if (!s)
		return (0);
	line = malloc(sizeof(char *) * (ft_looklen(s, c) + 1));
	if (!line)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			*line++ = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	*line = 0;
	return (line);
}
