/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 10:36:47 by rofourni          #+#    #+#             */
/*   Updated: 2016/11/15 10:40:49 by rofourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int		i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			s[i] = '\0';
			i++;
		}
	}
}
