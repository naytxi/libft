/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:26:35 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/11 11:39:08 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	else
		return (1);
}

/*#include <stdio.h>
int main (void)
{
	char str1[] = "aBtJhYvP";
	char str2[] = "021575545";
	char str3[] = "6e5r6f8s";
	char str4[] = "";
	printf("is digital : %d\n", ft_isdigit(str1));
	printf("is digital : %d\n", ft_isdigit(str2));
	printf("is digital : %d\n", ft_isdigit(str3));
	printf("is digital : %d\n", ft_isdigit(str4));
	return(0);
}*/