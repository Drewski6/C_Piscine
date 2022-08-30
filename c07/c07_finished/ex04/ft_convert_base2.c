/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:43:09 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/30 14:23:43 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	base_check(char *base, int base_len)
{
	int	i;

	i = 0;
	if (base_len < 2)
		return (0);
	while (*base)
	{
		i = 1;
		while (base[i])
		{
			if (*base == 32 || *base == '\f' || *base == '\n' || *base == '\r'
				|| *base == '\t' || *base == '\v')
				return (-1);
			if (*base == 45 || *base == 43)
				return (-1);
			if (*base == base[i])
				return (-1);
			i++;
		}
		base++;
	}
	return (0);
}

int	str_check(char **str, char *base)
{
	int	multiplier;
	int	i;
	int	j;

	multiplier = 1;
	while (**str == 32 || **str == '\f' || **str == '\n' || **str == '\r'
		|| **str == '\t' || **str == '\v')
		(*str)++;
	while (**str == '-' || **str == 43)
	{
		if (**str == '-')
			multiplier *= -1;
		(*str)++;
	}
	i = 0;
	while ((*str)[i])
	{
		j = 0;
		while ((*str)[i] != base[j] && base[j])
			j++;
		if (!base[j])
			return (0);
		i++;
	}
	return (multiplier);
}

int	nbr_check(char *nbr, char *base)
{
	int	i;

	while (*nbr)
	{
		i = 0;
		while (base[i])
		{
			if (*nbr == base[i])
				break ;
			i++;
		}
		if (base[i] == '\0')
			return (-1);
		nbr++;
	}
	return (0);
}

long long	int_builder(char *nbr, char *base)
{
	long long	base_ten;
	int			i;
	int			nbr_len;
	int			j;
	int			base_len;

	j = 0;
	i = 0;
	nbr_len = 0;
	base_ten = 0;
	base_len = 0;
	while (base[base_len])
		base_len++;
	while (nbr[nbr_len])
		nbr_len++;
	while (i < nbr_len)
	{
		j = 0;
		base_ten *= base_len;
		while (nbr[i] != base[j])
			j++;
		base_ten += j;
		i++;
	}
	return (base_ten);
}
