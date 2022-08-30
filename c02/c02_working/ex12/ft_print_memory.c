/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:37:31 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/15 08:52:46 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hex_load(char *write_head, char hex)
{
	if (hex % 16 < 10)
		*(write_head + 1) = hex % 16 + '0';
	else
		*(write_head + 1) = hex % 16 + 87;
	hex /= 16;
	if (hex % 16 < 10)
		*(write_head) = hex % 16 + '0';
	else
		*(write_head) = hex % 16 + 87;
}


void	print_addr(char *addr)
{
}


void	ascii_to_hex(char *dest, char *src)
{
	int		i;

	i = 0;
	while (i < 16)
	{
		hex_load(dest, src[i]);
		if (i % 2)
		{
			dest += 3;
			*(dest - 1) = ' ';
		}
		else
			dest += 2;
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int				i;
	unsigned int	j;
	char			*paddr;
	char			chunk[18];
	char			bar;
	char			hex_buffer[40];

	bar = 10;
	paddr = (char *)addr;
	j = 0u;
	while (j < size)
	{
		print_addr(paddr);
		ascii_to_hex(hex_buffer, paddr);
		write(1, hex_buffer, 40);
		i = -1;
		while (++i < 16 && *(paddr + i) != '\0')
			chunk[i] = *(paddr + i);
		chunk[i] = '\0';
		write(1, chunk, i);
		write(1, &bar, 1);
		j += 16;
		paddr += 16;
	}
	return (addr);
}
