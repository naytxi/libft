/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:47:49 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/11 09:54:06 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int a)
{
	if (a >= 0 && a <= 127)
	{
		return (1);
	}
	return (0);
}

/*#include <stdio.h>
int main(void)
{
	int b = 54;
	int d = 'H';
	int c = '?';
	int e = 'b';
	printf("is ascii : %d\n", ft_isascii(b));
	printf("is ascii : %d\n", ft_isascii(d));
	printf("is ascii : %d\n", ft_isascii(c));
	printf("is ascii : %d\n", ft_isascii(e));
	return(0);
}*/