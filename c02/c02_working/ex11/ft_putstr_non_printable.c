/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 09:23:09 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/15 14:04:58 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		is_printable(char a)
{
	if (a >= 32 && a < 127)
		return (1);
	else
		return (0);
}

void	hex_table_load(char *dest)
{
	int		i;

	i = 0;
	while (i < 17)
	{
		if (i < 10)
			dest[i] = i + '0';
		else
			dest[i] = i + 87;
		i++;
	}
}

void	hex_print(char *dest, char hex)
{
	char	hex_table[17];
	int		i;

	hex_table_load(hex_table);
	i = 0;
	while (i < 3)
	{
		if (i == 0)
			dest[i] = 92;
		else if (i == 1)
		{
			dest[i + 1] = hex_table[hex % 16];
			hex /= 16;
		}
		else if (i == 2)
			*(dest + 1) = hex_table[hex % 16];
		i++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	char	hex_str[3];

	while (*str != '\0')
	{
		if (is_printable(*str))
			write(1, str, 1);
		else
		{
			hex_print(hex_str, *str);
			write(1, hex_str, 3);
		}
		str++;
	}
}

int main(void)
{
	char 	string1[128];
	int		i;

	i = 1;
	while (i <= 127)
	{
		string1[i - 1] = (char)i;
		i++;
	}
	ft_putstr_non_printable(string1);

}
