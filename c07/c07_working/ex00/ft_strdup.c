/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:32:39 by dpentlan          #+#    #+#             */
/*   Updated: 2022/08/30 21:40:37 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	str_len(char *src)
{
	int	size;

	size = 0;
	while (*src)
	{
		size++;
		src++;
	}
	return (size);
}

char	*ft_strdup(char *src)
{
	char	*str_ret;
	int		src_len;
	int		i;

	i = 0;
	src_len = str_len(src);	
	str_ret = (char *)malloc(src_len * sizeof(char) + 1);
	if (!str_ret)
		return (0);
	while (src[i])
	{
		str_ret[i] = src[i];
		i++;
	}
	str_ret[i] = '\0';
	return (str_ret);
}

#include <stdio.h>
#include <string.h>

char *ft_strdup(char *src);

int	main(void)
{
	printf("%s\n", strcmp(strdup("Test"), ft_strdup("Test")) == 0 ?
			"OK" :
			"Fail");
	printf("%s\n", strcmp(strdup("484df41hdy1h111fs1fsd15sf15sdf115d15fdgs15gfd4sg1615df156g1515g4erg4561esg156gr15156g15eg15eg15e51e51g1515ge156e156eg156e15156ge516e1551eg51eg15g1551eg15e516eg15e15eg1515e55eg51e15e51g5151eg15eg1515egr515151erg51er51e51e551ee5eg51egr51er51er5er5eg51e5r1e51rg5egr5eg51erg5e1r51e6rg51egr516ee5g15e1g5e1g5e1g51ger51egr51erg55reg5er55er55"), ft_strdup("484df41hdy1h111fs1fsd15sf15sdf115d15fdgs15gfd4sg1615df156g1515g4erg4561esg156gr15156g15eg15eg15e51e51g1515ge156e156eg156e15156ge516e1551eg51eg15g1551eg15e516eg15e15eg1515e55eg51e15e51g5151eg15eg1515egr515151erg51er51e51e551ee5eg51egr51er51er5er5eg51e5r1e51rg5egr5eg51erg5e1r51e6rg51egr516ee5g15e1g5e1g5e1g51ger51egr51erg55reg5er55er55")) == 0 ?
			"OK" :
			"Fail");
}

/*
int	main(void)
{
	char sample_string[100] = "This is my string";
	char *strdup;

	strdup = ft_strdup(sample_string);

	printf("return: %s\n", strdup);

	free(strdup);
}
*/
