/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:48:45 by egolboyu          #+#    #+#             */
/*   Updated: 2023/10/27 23:10:38 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	a;
	int	t;
	int	i;

	a = 0;
	t = 1;
	i = 0;
	while ((*str && str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			t *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		a = a * 10 + str[i] - 48;
		i++;
	}
	return (t * a);
}