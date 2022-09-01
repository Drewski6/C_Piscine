/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 09:17:57 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/31 16:46:20 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

long long	int_builder(char *nbr, char *base);
int			nbr_check(char *nbr, char *base);
int			str_check(char **str, char *base);
int			base_check(char *base, int base_len);

void	add_to_str(char char_to_add, char *dest)
{
	while (*dest)
		dest++;
	*dest = char_to_add;
}

void	ft_putnbr(int nbl, int base_len, char *base, char *ret_str)
{
	char	c;

	if (nbl < 0)
		add_to_str('-', ret_str);
	if (nbl / base_len != 0)
	{
		if (nbl < 0)
			ft_putnbr(((nbl / base_len) * -1), base_len, base, ret_str);
		else
			ft_putnbr(nbl / base_len, base_len, base, ret_str);
	}
	if (nbl < 0)
		c = (base[((nbl % base_len) * -1)]);
	else
		c = (base[nbl % base_len]);
	add_to_str(c, ret_str);
	return ;
}

void	ft_putnbr_base(int nbr, char *base, char *ret_str)
{
	int		base_len;

	base_len = 0;
	if (!*base)
		return ;
	while (base[base_len])
		base_len++;
	if (base_len == 1)
		return ;
	else
		ft_putnbr(nbr, base_len, base, ret_str);
}

char	*ft_convert_base_2(char *nbr, char *base_from, char *base_to, int mult)
{
	char		*ret_str;
	long long	base_ten;
	int			base_to_len;

	base_ten = 0;
	ret_str = 0;
	base_to_len = 0;
	while (base_to[base_to_len])
		base_to_len++;
	if (nbr_check(nbr, base_from) == -1)
		return (NULL);
	base_ten = int_builder(nbr, base_from) * mult;
	if (nbr_check(nbr, base_from) == -1)
		return (NULL);
	printf("base_ten is: %d\n", (int)base_ten);
	ret_str = malloc(sizeof(char) * ((base_ten * mult) \
		/ base_to_len) + 3);
	if (!ret_str)
		return (NULL);
	ret_str[0] = '\0';
	ft_putnbr_base((int)base_ten, base_to, ret_str);
	return (ret_str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			base_from_len;
	int			base_to_len;
	int			multiplier;
	char		*ret_str;

	multiplier = 1;
	base_from_len = 0;
	base_to_len = 0;
	while (base_from[base_from_len])
		base_from_len++;
	while (base_to[base_to_len])
		base_to_len++;
	if (base_check(base_from, base_from_len) == -1)
		return (NULL);
	if (base_check(base_to, base_to_len) == -1)
		return (NULL);
	multiplier = str_check(&nbr, base_from);
	if (multiplier == 0)
		return (NULL);
	ret_str = ft_convert_base_2(nbr, base_from, base_to, multiplier);
	if (ret_str == NULL)
		return (NULL);
	return (ret_str);
}

int	main(int argc, char **argv)
{
	char	*result;

	(void)argc;
	result = 0;
	result = ft_convert_base(argv[1], argv[2], argv[3]);
	printf("results from program: %s\n", result);
	free(result);
}

/*
#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	printf("42:%s\n", ft_convert_base("    --2a", "0123456789abcdef", "0123456789"));
	printf("-2a:%s\n", ft_convert_base("    --42", "0123456789", "0123456789abcdef"));
}
*/
