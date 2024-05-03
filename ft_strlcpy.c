/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:33:43 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/11 11:20:22 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	j;

	j = 0;
	count = ft_strlen(src);
	if (size > 0)
	{
		while (src[j] && j < size - 1)
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = '\0';
	}
	return (count);
}

/*#include <stdio.h>

int main (void)
{
	char str1[] = "Powerpuff girls";
	char str2[10];
	size_t result;
	result = ft_strlcpy(str2, str1, 10);
	printf("Result of the copy %zu\n", result);
	return(0);
}*/