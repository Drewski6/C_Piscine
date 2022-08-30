/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:14:54 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/29 10:19:10 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	if (size <= 0)
		return (0);
	*range = (int *)malloc(sizeof(int) * size);	
	if (!*range)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int *range;

	printf("Warn: Any segfault will mean that arrays are not correctly allocated\n");

	printf("5:%d\n", ft_ultimate_range(&range, 0, 5));
	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", range[0], range[1], range[2], range[3], range[4]);
	
	printf("0:%d\n", ft_ultimate_range(&range, 3, 3));
	free(range);

	printf("2:%d\n", ft_ultimate_range(&range, -1, 1));
	printf("-1, 0 : %d, %d", range[0], range[1]);
	free(range);
}

/*
#include <stdio.h>

int	main(void)
{
	int *range;

	range = NULL;
	printf("size of array is %d\n", ft_ultimate_range(&range, -4, 2));

	printf("00: %d - 01: %d - 02: %d - 03: %d - 04: %d - 05: %d\n", range[0], range[1], range[2], range[3], range[4], range[5]);
	
	free(range);

}
*/
