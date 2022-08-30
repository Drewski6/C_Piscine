/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:39:12 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/19 10:31:09 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	nbl;
	char	c;

	nbl = (long)nb;
	if (nbl < 0)
		write(1, "-", 1);
	if (nbl / 10 != 0)
	{
		if (nbl < 0)
			ft_putnbr((nbl / 10) * -1);
		else
			ft_putnbr(nbl / 10);
	}
	if (nbl < 0)
		c = (((nbl % 10) * -1) + '0');
	else
		c = (nbl % 10 + '0');
	write(1, &c, 1);
	return ;
}
