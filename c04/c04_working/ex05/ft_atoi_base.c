/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:43:22 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/19 11:47:33 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	base_check(char *base, int base_len)
{
	int	i;

	i = 0;
	if (base_len < 2)
		return (0);
	while (*base)
	{
		i = 1;
		while (i < base_len)
		{
			if (*base == 32 || *base == '\f' || *base == '\n' || *base == '\r'
				|| *base == '\t' || *base == '\v')
				return (0);
			if (*base == 45 || *base == 43)
				return (0);
			if (*base == base[base_len])
				return (0);
			i++;
		}
		base++;
	}
	return (1);
}

int	str_check(char *str, char *base)
{
	int	multiplier;
	int	i;
	int	j;

	multiplier = 1;
	while (*base == 32 || *base == '\f' || *base == '\n' || *base == '\r'
		|| *base == '\t' || *base == '\v')
		str++;
	while (*str == '-' || *str == 43)
	{
		if (*str == '-')
			multiplier *= -1;
		str++;
	}
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i] != base[j] && base[j])
			j++;
		if (str[i] == base[j])
			return (0);
		i++;
	}
	return (multiplier);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	str_len;

	base_len = 0;
	str_len = 0;
	while (base[base_len] != '\0')
		base_len++;
	while (str[str_len] != '\0')
		str_len++;
	if (!base_check(base, base_len))
		return (0);
	if (!str_check(str, base))
		return (0);
	//atoi
	return (1);				// put this return 1 so that it will compile and i can test
}

int	main(int argc, char **argv)
{
	printf("argc is %d, argv[1] is %s, argv[2] is %s\n", argc, argv[1], argv[2]);
	ft_atoi_base(argv[1], argv[2]);
	//ft_atoi_base("", "");
}
