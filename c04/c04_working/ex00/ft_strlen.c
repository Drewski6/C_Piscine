/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:59:22 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/19 09:30:43 by dpentlan         ###   ########.fr       */
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

int main(int argc, char *argv[])
{
	printf("argc= %d, argv[1]= %s\n", argc, argv[1]);
	printf("Result of strlen = %d\n", ft_strlen(argv[1]));
}
