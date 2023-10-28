/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:45:36 by egolboyu          #+#    #+#             */
/*   Updated: 2023/10/23 18:51:13 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n && ++count)
		n /= 10;
	return (count);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*str;
	const char	*digits;

	digits = "0123456789";
	len = ft_numlen(n);
	str = (char *)malloc(sizeof(char) * (len) + 1);
	if (!str)
		return (0);
	str[len] = 0;
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	while (n)
	{
		if (n > 0)
			str[--len] = digits[n % 10];
		else
			str[--len] = digits[n % 10 * -1];
		n /= 10;
	}
	return (str);
}
