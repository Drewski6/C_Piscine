/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 22:34:09 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/30 22:57:24 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	size;

	size = 0;
	while (*src)
	{
		size++;
		src++;
	}
	return (size);
}

char	*ft_strdup(char *src)
{
	char	*str_ret;
	int		src_len;
	int		i;

	i = 0;
	src_len = ft_strlen(src);
	str_ret = (char *)malloc(src_len * sizeof(char) + 1);
	if (!str_ret)
		return (0);
	while (src[i])
	{
		str_ret[i] = src[i];
		i++;
	}
	str_ret[i] = '\0';
	return (str_ret);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stock_arr;

	i = 0;
	stock_arr = (t_stock_str *)malloc(sizeof(t_stock_str) * ac - 1);
	if (!stock_arr)
		return (0);
	while (i < ac)
	{
		stock_arr[i].size = ft_strlen(av[i]);
		stock_arr[i].str = av[i];
		stock_arr[i].copy = ft_strdup(av[i]);
		if (stock_arr[i].copy == 0)
			return (0);
		i++;
	}
	return (stock_arr);
}
