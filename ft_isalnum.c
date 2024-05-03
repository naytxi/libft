/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:47:20 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/11 09:54:33 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')
		|| (a >= '0' && a <= '9'))
	{
		return (1);
	}
	return (0);
}

/*#include <stdio.h>
int main (void)
{
	int b = 8;
	int c = 'h';
	int d = 'S';
	int e = '?';
	printf("is alnumeric : %d\n", ft_isalnum(b));
	printf("is alnumeric : %d\n", ft_isalnum(c));
	printf("is alnumeric : %d\n", ft_isalnum(d));
	printf("is alnumeric : %d\n", ft_isalnum(e));
	return(0);
}*/