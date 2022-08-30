/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 08:25:05 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/22 10:02:21 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **a, char **b)
{
	char	*buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 && (*s1 == *s2) && n)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void	ft_sort_char_tab(char **tab, int size)
{
	int	i;
	int	j;
	int	str_len;

	i = 0;
	while (i < size)
	{
		j = 1;
		while (j < size - i - 1)
		{
			str_len = 0;
			while (tab[j][str_len])
				str_len++;
			if (ft_strncmp(tab[j], tab[j + 1], str_len) > 0)
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	str_len;

	str_len = 0;
	i = 1;
	ft_sort_char_tab(argv, argc);
	while (i < argc)
	{
		str_len = 0;
		while (argv[i][str_len])
			str_len++;
		write(1, argv[i], str_len);
		write(1, "\n", 1);
		i++;
	}
}
