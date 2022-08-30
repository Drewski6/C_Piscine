/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:46:09 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/11 17:55:44 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result;
	
	result = 0;
	result = *a % *b;
	*a = *a / *b;
	*b = result;
}

int main (void)
{
	int	*a;
	int	*b;

	a = (int *)malloc(sizeof(int));
	b = (int *)malloc(sizeof(int));
	*a = 100;
	*b = 7;
	printf("a before divmod %d, b before divmod %d\n", *a, *b);
	ft_ultimate_div_mod(a, b);
	printf("a after divmod %d, b after divmod %d\n", *a, *b);
	free(a);
	free(b);
}
