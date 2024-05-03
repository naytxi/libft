/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:30:49 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/11 14:45:07 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *neddle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*neddle == '\0')
	{
		return ((char *)haystack);
	}
	i = 0;
	while (haystack[i] && len > i)
	{
		j = 0;
		while (haystack[i + j] == neddle[j] && (i + j) < len)
		{
			j++;
			if (neddle[j] == '\0')
			{
				return ((char *) &haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}

/*int main (void)
{
	char text1[] = "Hello fellow folks";
	char text2[] = "fellow";
	size_t n = 14;
	printf("Result: %s\n", ft_strnstr(text1, text2, n));
	return(0);
}*/