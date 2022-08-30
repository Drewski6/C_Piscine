/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:55:56 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/11 20:06:28 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	buffer;

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
