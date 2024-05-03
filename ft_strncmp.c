/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:46:31 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/11 12:10:09 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	j;

	j = 0;
	if (n == 0)
		return (0);
	while (s1[j] != '\0' && s1[j] == s2[j] && n -1 > j)
	{
		j++;
	}
	return ((unsigned char)s1[j] - (unsigned char)s2[j]);
}

/*#include <stdio.h>
int main(void)
{
	char str1[] = "busted";
	char str2[] = "clusters";
	printf("Result: %d\n", ft_strncmp(str1, str2, 5));
	return(0);
}*/