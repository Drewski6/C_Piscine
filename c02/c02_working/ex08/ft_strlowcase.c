/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:40:06 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/13 16:43:14 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char 	*ft_strlowcase(char *str)
{
	char *start;

	start = str;
    while(*str != '\0')
    {   
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
        str++;
    }   
	return (start);
}

int main (void)
{
    char string[] = "QWERazljsadlFkjas)eljsijaef0";
    
    printf("result of is strupcase: %s\n", ft_strlowcase(string));
}

