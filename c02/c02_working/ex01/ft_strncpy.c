/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 12:37:19 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/15 17:25:22 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;	
	
	i = 0u;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main (void)
{
	char string1[8] = "Hello";
	char string2[100];
	unsigned int i;

	i = 0u;
	while (string1[i] != '\0')
	{
		i++;
	}
	printf("Before: string1: %s, string2: %s\n", string1, string2);
	printf("i = %u\n", i);
	ft_strncpy(string2, string1, i);
	printf("After: string1: %s, string2: %s\n", string1, string2);
}
