/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:19:30 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/17 11:31:00 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	j;
	char			*str;

	if (!s)
	{
		return (NULL);
	}
	j = 0;
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
	{
		return (NULL);
	}
	while (s[j] != '\0')
	{
		str[j] = f(j, s[j]);
		j++;
	}
	str[j] = '\0';
	return (str);
}
/*int main(void)
{
	const char *str1 = "Bubbles Blossom Buttercup";
	char *result = ft_strmapi(str1, ft_toupper);
	if (result)
	{
		printf("After: %s\n", result);
		free(result);
	}
	else{
		printf("Error\n");
	}
	return(0);
}*/