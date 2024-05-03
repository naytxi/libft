/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:14:06 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/16 11:45:53 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*final;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	final = (char *)malloc ((len1 + len2 + 1) * sizeof(char));
	if (!final)
	{
		return (NULL);
	}
	ft_memcpy(final, s1, len1);
	ft_memcpy(final + len1, s2, len2);
	final[len1 + len2] = '\0';
	return (final);
}
/*int main (void)
{
	const char *string1 = "Hello";
	const char *string2 = "fellow folks";
	char *result = ft_strjoin(string1, string2);
	if (result != NULL)
	{
		printf("result is: %s\n", result);
		free(result);
	}
	else
	{
		printf("error\n");
	}
	return(0);
}*/