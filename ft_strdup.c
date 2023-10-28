/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:42:38 by egolboyu          #+#    #+#             */
/*   Updated: 2023/10/22 21:04:57 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dest;

	if (!src)
		return (NULL);
	dest = malloc(sizeof(char) * (ft_strlen(src)) + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main(int argc, char const *argv[])
{
	char *c = "abcdfd";
	char *a;
	a = ft_strdup(a);
	system("leaks a.out");
	return 0;
}*/