/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:52:18 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/11 11:59:02 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c +32;
		return (c);
	}
	else
		return (c);
}

/*#include <stdio.h>
int main(void)
{
	char strl1[] = "IM BATMAN";
	printf("original: %s\n", strl1);
	ft_tolower(strl1);
	printf("change: %s\n", strl1);
	return(0);
}*/