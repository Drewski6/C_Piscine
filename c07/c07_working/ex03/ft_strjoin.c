/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:03:26 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/30 16:27:14 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	str_len(int size, char **strs, char *sep)
{
	/* returns count of all characters in arrays plus separators.
	 * Note: does not return string + 1 for \0 */
	int	total_str_len;
	int	i;
	int	j;

	total_str_len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			total_str_len++;
			j++;
		}
		i++;
	}
	i = 0;
	while (sep[i])
		i++;		
	total_str_len += i * (size - 1);
	if (total_str_len < 0)
		return (0);
	return (total_str_len);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_str_len;
	char	*ret_str;
	int		i;
	
	total_str_len = str_len(size, strs, sep);
	ret_str = (char *)malloc(sizeof(char) * (total_str_len + 1));	
	if (!ret_str)
		return (NULL);
	ret_str[0] = '\0';
	if (size == 0)
		return (ret_str);
	i = 0;
	while (i < size)
	{
		if (i != 0)
			ret_str = ft_strcat(ret_str, sep);
		ret_str = ft_strcat(ret_str, strs[i]);
		i++;
	}
	ret_str = ft_strcat(ret_str, "\0");
	return (ret_str);
}
#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char **argv)
{
	char *return_str;
	printf("./a.out/output___said___this___is___a___success :\n");
	printf("%s\n",  return_str = ft_strjoin(argc, argv, "___"));
	free(return_str);
}
/*
int	main(void)
{
	char *strings[] = {"Hello", "These", "Are", "All", "My", "Strings"};
	char *ret_string;
	
	ret_string = ft_strjoin(0, strings, "* *");
	printf("return from strjoin is: '%s'\n", ret_string);
	free(ret_string);
}
*/
