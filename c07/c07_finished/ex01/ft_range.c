/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:23:30 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/29 10:21:08 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*int_array;
	int	i;

	range = max - min;
	if (range <= 0)
		return (0);
	int_array = (int *)malloc(range * sizeof(int));
	if (!int_array)
		return (NULL);
	i = 0;
	while (i + min < max)
	{
		int_array[i] = min + i;
		i++;
	}
	return (int_array);
}
