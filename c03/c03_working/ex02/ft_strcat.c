/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:02:44 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/16 20:16:50 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int main (void)
{
	char string1[100] = "This is the starting string END";
	char string2[100] = "Here is the second string END";

	printf("Before: string1 %s, string2 %s\n", string1, string2);
	printf("return of strcat %s\n", ft_strcat(string1, string2));
	printf("After: string1 %s, string2 %s\n", string1, string2);
}
