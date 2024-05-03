/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:47:32 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/11 11:55:58 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
		return (c);
	}
	else
		return (c);
}

/*#include <stdio.h>
int main (void)
{
	char str1[] = "we are all mad here";
	printf("original string : %s\n", str1);
	ft_toupper(str1);
	printf("change : %s\n", str1);
	return(0);
}*/