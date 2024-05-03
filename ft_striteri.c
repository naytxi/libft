/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:33:49 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/25 11:19:43 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	j;

	j = 0;
	if (!s || !f)
	{
		return ;
	}
	while (s[j])
	{
		f(j, &s[j]);
		j++;
	}
}
/*int main(void)
{
	char string[] = "ill be there for u";
	ft_striteri(string, ft_toupper);
	printf("String after: %s\n", string);
	return(0);
}*/