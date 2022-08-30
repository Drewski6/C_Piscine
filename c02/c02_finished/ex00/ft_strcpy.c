/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 09:37:56 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/14 11:22:46 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		i;
	char	*pdest;

	i = 0;
	pdest = dest;
	while (src[i] != '\0')
		i++;
	while (i > 0 && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		i--;
	}
	while (i > 0)
	{
		*dest = '\0';
	}
	*dest = '\0';
	return (pdest);
}
