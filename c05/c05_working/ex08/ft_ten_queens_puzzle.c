/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:02:06 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/22 21:29:16 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr(int nb)
{
        long    nbl;
        char    c;

        nbl = (long)nb;
        if (nbl < 0)
                write(1, "-", 1);
        if (nbl / 10 != 0)
        {
                if (nbl < 0)
                        ft_putnbr((nbl / 10) * -1);
                else
                        ft_putnbr(nbl / 10);
        }
        if (nbl < 0)
                c = (((nbl % 10) * -1) + '0');
        else
                c = (nbl % 10 + '0');
        write(1, &c, 1);
        return ;
}

int	ft_power(int nb, int power)
{
	if (power == 0)
		return (1);
	nb *= ft_power(nb, --power);
	return (nb);
}

int	spot_valid(int depth, long *board)
{
	int i;

	i = 1;
	while (i < depth)
	{
		if (*board % 10 == (*board / ft_power(10, i)) % 10
			|| *board % 10 == (*board / ft_power(10, i)) % 10 + i
			|| *board % 10 == (*board / ft_power(10, i)) % 10 - i)
			return (0);
		i++;
	}
	return (1);
}

int	queen_find(int depth, long *board, int *solutions)
{
	if (depth == 10)
	{
		*solutions++;
		return (1);
	}
	int	test;

	test = 0;
	while (test < 10)
	{
		*board *= 10;
		*board += test;
		if (spot_valid(depth, board))
			if (queen_find(++depth, board, solutions))
			{
				ft_putnbr(*board % 10);
				return (1);
			}
		*board /= 10;
		test++;
	}
	*board /= 10;
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int		solutions;
	long	board;
	int		depth;

	board = 0;
	solutions = 0;
	depth = 1;
	queen_find(depth, &board, &solutions);
	return (solutions);
}

#include <stdio.h>
int main(void)
{
	printf("result from ten queens: %d\n", ft_ten_queens_puzzle());
}
