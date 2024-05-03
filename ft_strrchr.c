/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:01:34 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/11 11:26:42 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last;
	int		len;

	last = ((char *)str);
	len = ft_strlen(str);
	while (len != 0)
	{
		if (last[len] == (char)c)
		{
			return (last + len);
		}
		len--;
	}
	if (last[0] == (char)c)
		return (last);
	return (0);
}

/*#include <stdio.h>

int main(void)
{
	char str[] = "How u doing";
	int a = 'u';
	char *result;
	result = ft_strrchr(str, a);
	printf("%c in position %ld\n", a, result - str);
	return(0);
}*/