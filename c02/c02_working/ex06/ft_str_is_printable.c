/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 13:04:32 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/14 13:00:31 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str == 127)
			return (0);
		str++;
	}
	return (1);
}


int main (void)
{
	char string[] = {'H', 'i', 127};

	printf("result of is printable: %d\n", ft_str_is_printable(string));
}
