/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:29:50 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/19 09:53:25 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	int_build(char *str)
{
	int ret_int;

	ret_int = 0;
	while (*str >= '0' && *str <= '9')
	{
		ret_int += *str - '0';
		if (str[1] >= '0' && str[1] <= '9')
			ret_int *= 10;
		str++;
	}
	return (ret_int);
}

int	ft_atoi(char *str)
{
	int multiplier;	

	multiplier = 1;
	while (*str == 32 || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	while (*str == '-' || *str == 43)
	{
		if (*str == '-')
			multiplier *= -1;		
		str++;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			return (int_build(str) * multiplier);
		else
			return (0);
	}
	return (0);
}

int main(int argc, char **argv)
{
	//char string1[] = {10, 13, 32, 56};
	printf("value of argc %d, argv 1: %s\n", argc, argv[1]);
	//printf("Return from atoi: %d", ft_atoi(argv[1]));
	printf("Return from atoi: %d", ft_atoi(argv[1]));			// test with array of white characters before pushing
}
