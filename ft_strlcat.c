/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:51:33 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/11 10:49:26 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	j;

	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size < dst_len +1)
		return (size + src_len);
	if (size > dst_len +1)
	{
		while (dst_len + 1 + j < size && src[j] != '\0')
		{
			dst[dst_len + j] = src[j];
			j++;
		}
	}
	dst[dst_len + j] = '\0';
	return (dst_len + src_len);
}

/*#include <stdio.h>

int main (void)
{
	char str1[] = "youre busted";
	char str2[16] = "death by spider";
	printf("Before the copy %s\n", str2);
	size_t result = ft_strlcat(str1, str2, 14);
	printf("After the copy %s\n", str2);
	printf("Lenght: %zu\n", result);
	return(0);	
}*/