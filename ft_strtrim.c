/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:49:30 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/16 13:04:52 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	len;
	size_t	newlen;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	len = ft_strlen(s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
	{
		start++;
	}
	if (start == len)
		return (ft_strdup(""));
	while (s1[len -1] && ft_strchr(set, s1[len -1]) && len > start)
		len--;
	newlen = len - start;
	str = (char *)malloc(sizeof(char) * (newlen + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], (newlen +1));
	str[len - start] = '\0';
	return (str);
}
/*int main(void)
{
	const char *string1 = "¿u are so noob?";
	const char *character = "¿?";
	char *result = ft_strtrim(string1, character);
	if( result != 	NULL)
	{
	printf("original chain: %s\n", string1);
	printf("chain whithout characters: %s\n", result);
	free(result);
	}
	else
	{
		printf("Error\n");
	}
	return(0);
}*/