/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:20:55 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/16 20:23:17 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;	
	char			*start;

	start = dest;
	i = 0u;
	while (*dest != '\0')
		dest++;
	while (i < nb && src[i] != '\0')
	{
		*dest = src[i];
		dest++;
		i++;
	}
	*dest = '\0';
	return (start);
}


int main (void)
{
    char    string1[] = "this is the first string|";
    char    string2[] = "this is the second string|";
    int     i;  
	int		len;

    i = 0;
	len = -1;
    while (string2[i] != '\0')
	{
        i++;
		len++;
	}
    printf("before: \nstring1 %s\nstring2 %s\n\n", string1, string2);
    printf("i: %d\n\n", i); 
    printf("result of strncat: %s\n\n", ft_strncat(string1, string2, len));
    printf("after: \nstring1 %s\n, string2 %s\n\n", string1, string2);

}
