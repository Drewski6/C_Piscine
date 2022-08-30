/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:34:00 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/30 13:00:25 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	long	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i * i <= nb && i < 50000)
		i++;
	return (i);
}

int	ft_is_prime(int nb)
{
	int	largest_sqrt;
	int	i;

	i = 3;
	largest_sqrt = 0;
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	largest_sqrt = ft_sqrt(nb);
	while (i < largest_sqrt)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;	

	i = 0;
	if (nb <= 1)
		return (2);
	while (!ft_is_prime(nb + i))
		i++;
	return (nb + i);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	printf("result of find next prime is %d\n",  ft_find_next_prime(atoi(argv[1])));
}
*/
#include <stdio.h>

int ft_find_next_prime(int nb);

int	main(void)
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
		ft_find_next_prime(-1) == 2 ? "OK" : "Fail",
		ft_find_next_prime(-3) == 2 ? "OK" : "Fail",
		ft_find_next_prime(0) == 2 ? "OK" : "Fail",
		ft_find_next_prime(1) == 2 ? "OK" : "Fail",
		ft_find_next_prime(2) == 2 ? "OK" : "Fail",
		ft_find_next_prime(3) == 3 ? "OK" : "Fail",
		ft_find_next_prime(4) == 5 ? "OK" : "Fail",
		ft_find_next_prime(5) == 5 ? "OK" : "Fail",
		ft_find_next_prime(6) == 7 ? "OK" : "Fail",
		ft_find_next_prime(7) == 7 ? "OK" : "Fail",
		ft_find_next_prime(10) == 11 ? "OK" : "Fail",
		ft_find_next_prime(11) == 11 ? "OK" : "Fail",
		ft_find_next_prime(13) == 13 ? "OK" : "Fail",
		ft_find_next_prime(19) == 19 ? "OK" : "Fail",
		ft_find_next_prime(20) == 23 ? "OK" : "Fail",
		ft_find_next_prime(2147483647) == 2147483647 ? "OK" : "Fail"
		  );
}
