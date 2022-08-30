/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 08:47:31 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/19 10:30:17 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	invalid_base_check(char *base, int base_len)
{
	int	i;

	if (*base == 45 || *base == 43)
		return (0);
	while (*base)
	{
		i = 1;
		while (i < base_len)
		{
			if (*base == base[i])
				return (0);
			if (base[i] == 45 || base[i] == 43)
				return (0);
			i++;
		}
		base++;
	}
	return (1);
}

void	ft_putnbr(long nbl, int base_len, char *base)
{
	char	c;

	if (nbl < 0)
		write(1, "-", 1);
	if (nbl / base_len != 0)
	{
		if (nbl < 0)
			ft_putnbr(((nbl / base_len) * -1), base_len, base);
		else
			ft_putnbr(nbl / base_len, base_len, base);
	}
	if (nbl < 0)
		c = (base[((nbl % base_len) * -1)]);
	else
		c = (base[nbl % base_len]);
	write(1, &c, 1);
	return ;
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	nbl;

	nbl = (long)nbr;
	base_len = 0;
	if (!*base)
		return ;
	while (base[base_len])
		base_len++;
	if (base_len == 1)
		return ;
	if (!invalid_base_check(base, base_len))
		return ;
	else
		ft_putnbr(nbl, base_len, base);
}
