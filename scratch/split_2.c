/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:14:39 by dpentlan          #+#    #+#             */
/*   Updated: 2022/09/01 19:21:09 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_seperator(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	get_word_count(char *str, char *charset)
{
	int i;
	int word_count;

	i = 0;
	word_count = 0;
	while (str[i])
	{
		if (!is_seperator(str[i], charset))
		{
			word_count++;
			while (!is_seperator(str[i], charset) && str[i])
				i++;
		}
		else
			i++;
	}
	return (word_count);
}

int	get_word_size(char *str, int *pos, char *charset)
{
	int i;
	int j;

	j = 0;
	i = 0;
	*pos = 0;
	while (!is_seperator(str[i], charset))
	{
		*pos += 1;
		i++;
		j++;
	}
	while (is_seperator(str[i], charset))
	{
		*pos += 1;
		i++;
	}
	return (j);
}

char *ft_strdup(char *str, int word_size)
{
	int 	i;
	char	*word;

	i = 0;
	word = 0;
	word = (char *)malloc(sizeof(char) * (word_size + 1));
	if (!word)
		return (0);
	while (i < word_size)
	{
		word[i] = str[i];
		i++;	
	}
	word[i] = '\0';
	return (word);
}

char **split(char *str, char *charset)
{
	int i;
	char **table;
	int word_count;
	int pos;
	int	word_size;
	
	i = 0;
	table = 0;
	word_count = 0;
	pos = 0;
	word_size = 0;
	word_count = get_word_count(str, charset);
	if (word_count == 0)
		return (0);
	table = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!table)
		return (0);
	while (i < word_count)	
	{
		word_size = get_word_size(str, &pos, charset);
		table[i] = ft_strdup(str, word_size); 
		if (table[i] == 0)
			return (0);
		str += pos;
		i++;
	}
	table[i] = '\0';
	return (table);
}

#include <stdio.h>
int main(int argc, char **argv)
{
	char **table;
	int i;

	i = 0;
	table = 0;
	(void)argc;
	table = split(argv[1], argv[2]);
	while (table[i])	
	{
		printf("table[%d] = %s\n", i, table[i]);
		i++;
	}
}




/* 	first get word count
 *	malloc word count
 *	strdup
 *	seek next word
 *	main split function
 */
