/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 21:39:52 by egolboyu          #+#    #+#             */
/*   Updated: 2023/10/23 18:50:52 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	to_upper(unsigned int a, char *c)
{
	if (c[a])
		c[a] -= 32;
}

void	to_lower(unsigned int a, char *c)
{
	if (c[a])
		c[a] += 32;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (*s != '\0' && f != NULL)
	{
		i = ft_strlen(s);
		while (j < i)
		{
			(*f)(j, s);
			s++;
			j++;
		}
	}
}
/*int main(void)
{
    char str[] = "helloworldHELLOWORLD";
    
    // Using ft_striteri to convert the string to uppercase
    ft_striteri(str, to_upper);
    printf("Uppercase: %s\n", str);

    // Using ft_striteri to convert the string to lowercase
    ft_striteri(str, to_lower);
    printf("Lowercase: %s\n", str);

    return 0;
}*/