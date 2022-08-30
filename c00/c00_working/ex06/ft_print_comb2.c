/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 18:16:22 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/11 11:43:30 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	num[10];
	int		i;
	
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	i = 0;
	while (nb != 0)
	{
		num[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	while (--i >= 0)
		write(1, &num[i], 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			if (a < 10)
				write(1, "0", 1);
			ft_putnbr(a);
			write(1, " ", 1);
			if (b < 10)
				write(1, "0", 1);
			ft_putnbr(b);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
