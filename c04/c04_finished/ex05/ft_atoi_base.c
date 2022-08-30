/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:43:22 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/26 10:39:39 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// found out later that this does not check for duplicates. looks at c07/ex04
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
				return (0);
			if (*base == 45 || *base == 43)
				return (0);
			if (*base == base[base_len])
			// should be *base == base[i]; if you decided to reupload
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
		// should be if (!base[j])
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
	return (1);
}
