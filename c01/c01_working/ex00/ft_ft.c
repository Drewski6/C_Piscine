/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:20:26 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/11 14:40:49 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define DEBUG

#ifdef DEBUG
#include <stdio.h>
#include <stdlib.h>
#endif

void	ft_ft(int *ndr)
{
	*ndr = 42;
}

#ifdef DEBUG
int	main(void)
{
	int	*number;

	number = NULL;
	number = (int *)malloc(sizeof(int));

	ft_ft(number);
	printf("number is %d\n", *number);

	free(number);
}
#endif
