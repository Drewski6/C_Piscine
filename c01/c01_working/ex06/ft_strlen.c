/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:14:46 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/11 18:52:26 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int main (void)
{
	char	string[100] = "YOOOO this is a long ass string";
	char	string2[10] = "short";
	int		str_len;
	int		str_len2;

	str_len = 0;
	str_len2 = 0;
	str_len = ft_strlen(string);
	str_len2 = ft_strlen(string2);
	printf("strlen of string is %d\n", str_len);
	printf("strlen2 of string2 is %d\n", str_len2);
}
