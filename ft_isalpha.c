/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:29:48 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/11 11:41:44 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		return (0);
	else
		return (1);
}

/*#include <stdio.h>

int main(void)
{
	char str1[] = "AbCdEfG";
	char str2[] = "0e3r4t5g";
	char str3[] = "shinees back";
	char str4[] = "";
	printf("is alphabetic : %d\n", ft_isalpha(str1));
	printf("is alphabetic : %d\n", ft_isalpha(str2));
	printf("is alphabetic : %d\n", ft_isalpha(str3));
	printf("is alphabetic : %d\n", ft_isalpha(str4));
	return(0);
}*/