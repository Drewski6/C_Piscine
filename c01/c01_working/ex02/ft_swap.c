/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:04:32 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/11 17:14:16 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}

int	main (void)
{
	int	*a;
	int	*b;

	a = (int *)malloc(sizeof(int));
	b = (int *)malloc(sizeof(int));

	*a = 8;
	*b = 12;

	printf("prior to swap a is %d, b is %d\n", *a, *b);
	ft_swap(a, b);
	printf("after swap a is %d, b is %d\n", *a, *b);
}
