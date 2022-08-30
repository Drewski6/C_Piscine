/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:09:11 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/26 12:45:06 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	add_to_char_set(char **ref_char_set, char *str_to_add)
{
	int	i;
	int	j;

	i = 0;
	while (str_to_add[i])
	{
		j = 0;
		while ((*ref_char_set)[j])
		{
			if ((*ref_char_set)[j] == str_to_add[i])
				break;
			j++;
		}
		if (!(*ref_char_set)[j])
		{
			(*ref_char_set)[j] = str_to_add[i];
			i++;
			continue;
		}
		i++;
	}
}

void	print_allowed(char **char_set, char *str_to_print)
{
	int i;
	int	j;

	i = 0;
	while (str_to_print[i])
	{
		j = 0;
		while ((*char_set)[j])
		{
			if ((*char_set)[j] == str_to_print[i])
			{
				write(1, &str_to_print[i], 1);
				(*char_set)[j] = 1;
			}
			j++;
		}
		i++;
	}
}

void	union_problem(char *str1, char *str2)
{
	char char_set[255];
	char *start_set;

	start_set = &char_set[0];
	add_to_char_set(&start_set, str1);
	add_to_char_set(&start_set, str2);
	printf("char_set is %s\n", char_set);
	print_allowed(&start_set, str1);	
	print_allowed(&start_set, str2);	
}

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	union_problem(argv[1], argv[2]);
	return (0);
}

