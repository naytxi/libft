/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:28:14 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/11 09:53:13 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_temp;
	unsigned char	*src_temp;

	if (!dst && !src)
		return (NULL);
	dst_temp = (unsigned char *)dst;
	src_temp = (unsigned char *)src;
	if (src_temp < dst_temp && dst_temp < src_temp + len)
		while (len--)
			dst_temp[len] = src_temp[len];
	else
		while (len--)
			*(dst_temp++) = *(src_temp++);
	return (dst);
}

/*#include <stdio.h>

int main (void)
{
	char str[] = "ill be the very best";
	char str_copy[12];
	ft_memmove(str_copy,str,10);
	printf("Result of memmove: %s\n", str_copy);
	return(0);
}*/