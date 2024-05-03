/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:02:42 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/24 13:54:35 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t	count;

	count = 0;
	while (count < len)
	{
		((unsigned char *) s)[count] = (unsigned char)c;
		count++;
	}
	return (s);
}

/*#include <stdio.h>

int main (void)
{
	char str1[19] = "hello fellow folks";
	char str2[4] = "256";
	size_t lenght1 = strlen(str1);
	size_t lenght2 = strlen(str2);
	printf("before memset : %s\n", str1);
	ft_memset(str1, 'f', lenght1);
	printf("after memset : %s\n", str1);
	printf("before memset : %s\n", str2);
	ft_memset(str2, 'g', lenght2);
	printf("after memset : %s\n", str2);
	return(0);
}*/