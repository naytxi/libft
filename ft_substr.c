/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:45:15 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/16 11:08:14 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	lenght;
	char	*str;

	if (!s)
	{
		return (NULL);
	}
	lenght = ft_strlen(s);
	if (start >= lenght)
	{
		return (ft_strdup(""));
	}
	if (len > lenght - start)
		len = lenght - start;
	s += start;
	str = (char *)malloc ((len +1) * sizeof(char));
	if (!str)
	{
		return (NULL);
	}
	ft_memcpy(str, s, len);
	str[len] = '\0';
	return (str);
}
/*int main (void)
{
	const char *string = "How u doing";
	int first = 8;
	size_t longitude = 6;
	char *substring = ft_substr(string, first, longitude);
	if( substring != NULL)
	{
		printf("result: %s\n", substring);
		free(substring);
	}
	return(0);
}*/