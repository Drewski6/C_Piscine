/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:17:52 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/31 15:42:08 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str_ret;
	int		src_len;
	int		i;

	i = 0;
	while (src[src_len])
		src_len++;
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

int	replace_with_null(char *str, char *charset, int str_len)
{
	int	i;
	int	j;

	i = 0;
	while (i < str_len)
	{
		j = 0;
		while (str[i] != charset[j] && charset[j])
			j++;
		if (charset[j])
			str[i] = '\0';
		i++;
	}
	return (0);
}

int	word_count(char *str, int str_len)
{
	int	i;
	int	word_num;

	i = 0;
	word_num = 1;
	while (i < str_len)
	{
		if (str[i] == '\0' && str[i - 1] != '\0')
			word_num++;
		i++;
	}
	return (word_num);
}

char	**assign_addresses(char **table, char *str_copy, int str_len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < str_len)
	{
		if (str_copy[i] && str_copy[i - 1] == '\0')
		{
			table[j] = &str_copy[i];
			j++;
		}
		i++;
	}
	table[j] = '\0';
	return (table);
}

char	**ft_split(char *str, char *charset)
{
	char	*str_copy;
	char	**table;
	int		str_len;
	int		str_num;

	str_len = 0;
	str_num = 0;
	str_copy = 0;
	while (str[str_len])
		str_len++;
	str_copy = ft_strdup(str);
	if (!str_copy)
		return (0);
	replace_with_null(str_copy, charset, str_len);
	str_num = word_count(str_copy, str_len);
	table = (char **)malloc(sizeof(char *) * str_num + 1);
	if (!table)
		return (0);
	table = assign_addresses(table, str_copy, str_len);
	return (table);
}
