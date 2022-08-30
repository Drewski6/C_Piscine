/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:35:09 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/23 16:57:04 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	long i;

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
	if (nb < 2)
		return (0);
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

/*
int	main(int argc, char **argv)
{
	(void)argc;
	printf("result of is_prime is %d\n", ft_is_prime(atoi(argv[1])));
}
*/

#include <stdio.h>

int ft_is_prime(int nb);

int	main(void)
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
		ft_is_prime(-1) == 0 ? "OK" : "Fail",
		ft_is_prime(-3) == 0 ? "OK" : "Fail",
		ft_is_prime(0) == 0 ? "OK" : "Fail",
		ft_is_prime(1) == 0 ? "OK" : "Fail",
		ft_is_prime(2) == 1 ? "OK" : "Fail",
		ft_is_prime(3) == 1 ? "OK" : "Fail",
		ft_is_prime(4) == 0 ? "OK" : "Fail",
		ft_is_prime(5) == 1 ? "OK" : "Fail",
		ft_is_prime(6) == 0 ? "OK" : "Fail",
		ft_is_prime(7) == 1 ? "OK" : "Fail",
		ft_is_prime(10) == 0 ? "OK" : "Fail",
		ft_is_prime(11) == 1 ? "OK" : "Fail",
		ft_is_prime(13) == 1 ? "OK" : "Fail",
		ft_is_prime(19) == 1 ? "OK" : "Fail",
		ft_is_prime(20) == 0 ? "OK" : "Fail"
		  );
}
