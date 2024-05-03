/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:32:48 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/11 11:52:57 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*src2;
	unsigned char		*dst2;

	if ((dst == NULL && src == NULL) || !n)
		return (dst);
	src2 = (const unsigned char *)src;
	dst2 = (unsigned char *)dst;
	while (n--)
	{
		*dst2++ = *src2++;
	}
	return (dst);
}

/*#include <stdio.h>
int main(void)
{
	char source[] = "happy no birthday for you for me";
	char destiny[50];
	ft_memcpy(destiny, source, 13);
	printf("source : %s\n", source);
	printf("destiny : %s\n", destiny);
	return(0);
}*/