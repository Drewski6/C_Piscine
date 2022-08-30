/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:12:53 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/18 16:05:48 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;	

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}

int main(int argc, char **argv)
{
	printf("argc= %d, argv[1]= %s\n", argc, argv[1]);
	ft_putstr(argv[1]);
}
