/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:42:41 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/11 11:44:06 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	else
		return (1);
}

/*#include <stdio.h>
int main (void)
{
	char str1[] = "Charmander";
	char str2[] = "12232455";
	char str3[] = "1s2fwq5g2";
	char str4[] = "";
	printf("is printable %d\n", ft_isprint(str1));
	printf("is printable %d\n", ft_isprint(str2));
	printf("is printable %d\n", ft_isprint(str3));
	printf("is printable %d\n", ft_isprint(str4));
	return(0);
}*/