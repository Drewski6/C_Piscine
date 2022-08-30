/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:48:48 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/13 17:09:43 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char 	*ft_strupcase(char *str)
{
	char *start;

	start = str;
    while(*str != '\0')
    {   
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
        str++;
    }   
	return (start);
}

int main (void)
{
    char string[] = "azljsadlFkjas)eljsijaef0";
    
    printf("result of is strupcase: %s\n", ft_strupcase(string));
}
