/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:23:30 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/29 10:11:24 by dpentlan         ###   ########.fr       */
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

#include <stdio.h>

int *ft_range(int min, int max);

int	main(void)
{
	int *range;

	printf("Warn: Don't forget to check that the array is of the correct size manually ! Can't know size of `malloc` arrays\n");
	printf("Warn: Any segfault will mean that arrays are not correctly allocated\n");

	range = ft_range(0, 5);
	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", range[0], range[1], range[2], range[3], range[4]);
	free(range);
	
	range = ft_range(3, 3);
	free(range);
	
	range = ft_range(-1, 1);
	printf("-1, 0 : %d, %d", range[0], range[1]);
	free(range);
}
