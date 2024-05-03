/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:22:41 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/24 11:02:35 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*str;
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (src[size])
		size++;
	str = (char *)malloc((size + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char *original = "gotta catch them all";
	char *duplicated = ft_strdup(original);
	if(duplicated != NULL)
	{
		printf("original: %s, duplicated: %s\n", original, duplicated);
		free(duplicated);
	}
	return(0);
}*/