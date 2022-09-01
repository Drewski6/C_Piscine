/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_practice.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:04:04 by dpentlan          #+#    #+#             */
/*   Updated: 2022/09/01 16:12:40 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int    ft_is_a_separator(char a, char *charset)
{
    int    j;

    j = -1;
    while (charset[++j])
        if ((charset[j] == a) && (charset[j] != '\0'))
            return (1);
    return (0);
}

char    *ft_strdup_mod(char *src, int it, int j)
{
    char    *duplicate;
    int        i;

    duplicate = malloc(sizeof(char) * j + 1);
    if (duplicate == NULL)
        return (0);
    i = -1;
    while (++i < j)
        duplicate[i] = src[it - j + i];
    duplicate[i] = 0;
    return (duplicate);
}

int    ft_count_words(char *str, char *charset)
{
    int    i;
    int    nb;

    i = 0;
    nb = 0;
    while (str[i])
    {
        if (!(ft_is_a_separator(str[i], charset)))
        {
            nb++;
            while ((!(ft_is_a_separator(str[i], charset))) && str[i] != '\0')
            {
                i++;
            }
        }
        else
        i++;
    }
    return (nb);
}

int    next_word(char *str, int *it, char *charset)
{
    int    j;    

    j = 0;
    while ((ft_is_a_separator(str[*it], charset)) && str[*it] != '\0')
    {
        *it += 1;
    }
    while (!(ft_is_a_separator(str[*it], charset)) && str[*it] != '\0')
    {
        *it += 1;
        j++;
    }
    return (j);
}

char    **ft_split(char *str, char *charset)
{
    char    **split;
    int        size;
    int        i;
    int        it;
    int        j;

    i = -1;
    it = 0;
    size = ft_count_words(str, charset);
    split = malloc(sizeof (char *) * (size + 1));
    if (split == NULL)
        return (0);
    while (++i < size)
    {    
        j = next_word(str, &it, charset);
        split[i] = ft_strdup_mod(str, it, j);
    }
    split[i] = '\0';
    return (split);
}

int    main(void)
{
    char **a = ft_split("INc2cXyEvlAwNk7uHy8Jrj1CB5LD3hNEYfZ5wKNRqMdEk" , "Zdkqgh");
    int i = -1;
    while(a[++i])
        printf("%s\n", a[i]);

}
