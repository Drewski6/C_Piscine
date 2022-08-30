/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:21:12 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/11 17:30:47 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*mod = a % b;
	*div = a / b;
}

int	main(void)
{
	int		a = 82;	
	int		b = 9;
	int		*div = NULL;
	int		*mod = NULL;

	div = (int *)malloc(sizeof(int));
	mod = (int *)malloc(sizeof(int));

	printf("value of div prior to func %d, value of mod prior to func %d\n", *div, *mod);
	ft_div_mod(a, b, div, mod);
	printf("value of div after to func %d, value of mod after to func %d\n", *div, *mod);

	free(div);
	free(mod);
}
