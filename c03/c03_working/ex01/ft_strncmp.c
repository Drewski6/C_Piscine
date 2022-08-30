/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:55:58 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/17 17:09:40 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 && (*s1 == *s2) && n)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)	
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int main (void)
{
	char	string1[] = "this";
	char	string2[] = "this is my string";
	int 	i;

	i = 0;
	while (string1[i] != '\0')
		i++;
	printf("i prior to strncmp is %d\n", i);
	printf("result of strncmp is %d\n", ft_strncmp(string1, string2, sizeof(string1)));
}

/*
	unsigned int	i;

	i = 0u;
	while (i < n && s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
*/
