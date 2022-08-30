/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 19:09:03 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/15 12:20:51 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0u;
	while (*src != '\0')
	{
		if (i + 1 < size)
		{
			*dest = *src;
			dest++;
		}
		src++;
		i++;
	}
	*dest = '\0';
	return (i);
}

int main (void)
{
	char string1[] = "This is my string!!!";
	char string2[30] = "";
	int size;

	size = 0;
	while (string1[size] != '\0')
	{
		size++;
	}
	size++;
	printf("\nstr len is %d\n", size);
	printf("Before: string1: %s, string2: %s\n", string1, string2);
	printf("size: %d, return value: %u\n", size, ft_strlcpy(string2, string1, 5));
	printf("After: string1: %s, string2: %s\n", string1, string2);
}
