/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:30:05 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/15 15:00:27 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	is_print(char a)
{
	if (a >= 32 && a < 127)
		return (1);
	else
		return (0);
}

int	is_alphanum(char a)
{
	if ((a >= 48 && a <= 57) || (a >= 65 && a <= 90) || (a >= 97 && a <= 122))
		return (1);
	else
		return (0);
}

int	is_alpha(char a)
{
	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	if (str[i] >= 97 && str[i] <= 122)
		str[i] -= 32;
	i++;		
	while (str[i] != '\0')
	{
		if ((str[i]>96 && str[i]<123) && !is_alphanum(str[i-1]))
		{
			str[i] -= 32;
		}
		else if (is_alphanum(str[i-1]) && (str[i] >= 65 && str[i] <= 90))
			str[i] += 32;
		i++;
	}
	return (str);
}

int main (void)
{
    char string[] = "salut, comment tu ? VAs ? 42Mots quaRanTe-dEux; Cinquante+et+uN";
    
    printf("result of is strcapitalize: %s\n", ft_strcapitalize(string));
}

