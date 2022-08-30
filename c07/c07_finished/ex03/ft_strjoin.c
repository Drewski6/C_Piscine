/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:03:26 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/30 16:31:20 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(int size, char **strs, char *sep)
{
	int	total_str_len;
	int	i;
	int	j;

	total_str_len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			total_str_len++;
			j++;
		}
		i++;
	}
	i = 0;
	while (sep[i])
		i++;
	total_str_len += i * (size - 1);
	if (total_str_len < 0)
		return (0);
	return (total_str_len);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_str_len;
	char	*ret_str;
	int		i;

	total_str_len = str_len(size, strs, sep);
	ret_str = (char *)malloc(sizeof(char) * (total_str_len + 1));
	if (!ret_str)
		return (NULL);
	ret_str[0] = '\0';
	if (size == 0)
		return (ret_str);
	i = 0;
	while (i < size)
	{
		if (i != 0)
			ret_str = ft_strcat(ret_str, sep);
		ret_str = ft_strcat(ret_str, strs[i]);
		i++;
	}
	ret_str = ft_strcat(ret_str, "\0");
	return (ret_str);
}
