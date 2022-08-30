/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 09:37:47 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/17 15:13:47 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0U;
	src_len = 0U;
	i = 0U;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	while (src[i] != '\0' && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	if (dest_len > size)
		return (src_len + size);
	return (dest_len + src_len);
}

int main(void)
{
    char string1[10] = "adga";
	char string2[20] = "hiiiiiiiiiiiii";
    unsigned int i;
//    unsigned int j;

    i = 0u; 
//    j = 0u; 
	/*
    while (string1[i] != '\0')
        i++;
    while (string2[j] != '\0')
	{
        i++;
		j++;
	}
	*/
	i = sizeof(string1);
    printf("Before\nstring1: %s\nstring2: %s\n", string1, string2);
    printf("i is %d, result of strlcat is: %d\n", i, ft_strlcat(string1, string2, i));
	printf("strlen of strlcat: %ld\n", strlen(string1));
    printf("After\nstring1: %s\nstring2: %s\n", string1, string2);
}
