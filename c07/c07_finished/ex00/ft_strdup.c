/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:32:39 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/30 21:42:53 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *src)
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
	src_len = str_len(src);
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
