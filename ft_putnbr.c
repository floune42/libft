/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 13:27:21 by rofourni          #+#    #+#             */
/*   Updated: 2016/11/21 12:34:05 by rofourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long long int	u;

	u = n;
	if (n < 0)
	{
		u = -u;
		ft_putchar('-');
	}
	if (u >= 10)
	{
		ft_putnbr(u / 10);
		ft_putnbr(u % 10);
	}
	else
		ft_putchar(u + '0');
}