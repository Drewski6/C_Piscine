/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 19:09:03 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/14 09:10:57 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
