/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:44:48 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/11 10:55:08 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	j;

	j = 0;
	while (j < n)
	{
		if (((unsigned char *)s)[j] == (unsigned char)c)
			return ((void *)&((unsigned char *)s)[j]);
		j++;
	}
	return (NULL);
}

/*int main(void)
{
	char str[] = "blossom bubbles buttercup";
	int a = 'o';
	size_t len = 15;
	printf("result: %s\n", ft_memchr(str, a ,len));
	return(0);
}*/