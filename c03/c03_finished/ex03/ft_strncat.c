/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:20:55 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/16 20:25:40 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
