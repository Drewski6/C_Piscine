/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:15:28 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/24 13:11:58 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_board(int *board)
{
	int		i;
	char	a;

	i = 0;
	while (i < 10)
	{
		a = board[i] + '0';
		write(1, &a, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	verify_pos(int pos, int *board)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (board[pos] == board[i] + (pos - i))
			return (0);
		if (board[pos] == board[i])
			return (0);
		if (board[pos] == board[i] - (pos - i))
			return (0);
		i++;
	}
	return (1);
}

int	queen_find(int pos, int *board, int *solutions)
{
	int	test;

	if (!(verify_pos(pos, board)))
		return (0);
	pos++;
	if (pos == 10)
	{
		*solutions += 1;
		print_board(board);
		return (0);
	}
	test = 0;
	while (test < 10)
	{
		board[pos] = test;
		queen_find(pos, board, solutions);
		test++;
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int	queen_positions[10];
	int	solutions;
	int	test;

	solutions = 0;
	test = 0;
	while (test < 10)
	{
		queen_positions[0] = test;
		queen_find(0, queen_positions, &solutions);
		test++;
	}
	return (solutions);
}
