/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:31:30 by egolboyu          #+#    #+#             */
/*   Updated: 2023/10/27 19:01:06 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		sign;
	char	c;

	sign = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		sign = -1;
	}
	if (n / 10)
		ft_putnbr_fd(n / 10 * sign, fd);
	c = '0' + n % 10 * sign;
	ft_putchar_fd(c, fd);
}
