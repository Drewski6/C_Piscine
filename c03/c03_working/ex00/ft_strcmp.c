/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 09:14:54 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/16 19:17:50 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int main(void)
{
	char	string1[] = "Hello1";
	char	string2[] = "Hello9";
	int i;
	
	i = 0;
	i = ft_strcmp(string1, string2);
	printf("Result of strcmp = %d\n", i);
}










/*

	if (*s1 == '\0')
		return (*s1 - *s2);
	while (*s1 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (*s1 - *s2);
	}
	return (0);
*/
