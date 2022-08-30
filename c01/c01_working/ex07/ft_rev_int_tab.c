/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:55:56 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/12 10:47:24 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int buffer;

	i = 0;
	while (i < size)
	{
		buffer = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = buffer;
		i++;
		size--;
	}
}

int main (void)
{
	int numbers[10] = {1, 8, 1, 4, 5, 78, 3, 9, 6, 7};
	int size = 10;
	int i;

	ft_rev_int_tab(numbers, size);
	i = 0;
	while (i < size)
	{
		printf("%d ", numbers[i]);
		i++;
	}
} 
