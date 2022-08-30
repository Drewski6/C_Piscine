/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 19:28:05 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/16 20:54:56 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		i = 0;
		while (to_find[i] != '\0' && to_find[i] == str[i])
			i++;	
		if (to_find[i] == '\0')
			return (str);
		str++;
	}
	return (0);
}

int main (void)
{
	char	string1[] = "This is my starting string it is long and should be searched";
	char	string2[] = "my";
	char	*found_it;

	found_it  = ft_strstr(string1, string2);
	printf("result of strstr: %s\n", found_it);
}
/*
	int	i;
	int	len;

	len = 0;
	while (to_find[len] != '\0')
		len++;
	while (*str != '\0')
	{
		i = 0;
		while (i < len)
		{
			if (str[i] != to_find[i])
				break;
			else
				i++;
		}
		if (i == len)
			return (str);
		str++;
	}
	return (0);
*/
