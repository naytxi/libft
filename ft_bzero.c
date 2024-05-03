/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:20:12 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/11 09:54:42 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *e, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		((unsigned char *) e)[count] = 0;
		count++;
	}
}

/*#include <stdio.h>
int main (void)
{
	char	s[8];
	int	c;
	
	ft_bzero(s, sizeof(s));
	c = 0;
	while (c < sizeof(s))
	{
		printf("%d", (int)s[c]);
		c++;
	}
	return(0);
}*/