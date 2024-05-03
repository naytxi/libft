/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:21:13 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/23 16:44:11 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	subc;
	int	count;

	count = 0;
	subc = 0;
	while (*s)
	{
		if (*s != c && !subc)
		{
			subc = 1;
			count++;
		}
		else if (*s == c)
		{
			subc = 0;
		}
		s++;
	}
	return (count);
}

static size_t	ft_numcharac(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (s[count] != c && s[count] != '\0')
	{
		count++;
	}
	return (count);
}

static char	**ft_free(const char **str, size_t lenght)
{
	while (lenght--)
	{
		free((void *)str[lenght]);
	}
	free (str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	j;
	size_t	len;

	j = 0;
	if (!s)
		return (NULL);
	len = ft_countwords(s, c);
	str = (char **)malloc((len + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (j < len)
	{
		while (*s == c)
			s++;
		str[j] = (char *)malloc((ft_numcharac(s, c) + 1) * sizeof(char));
		if (!str[j])
			return (ft_free((const char **)str, j));
		ft_strlcpy(str[j], s, (ft_numcharac(s, c) + 1));
		s = ft_strchr(s, (int)c);
		j++;
	}
	str[j] = 0;
	return (str);
}
/*int main(void)
{
	char text[] = "Too much information";
	char delimit = ' ';
	char **temp;
	char **rdo;
	int i = 0;
	rdo = (char **)malloc(sizeof(char *));
	rdo = ft_split(text, delimit);
	if(rdo)
	{
		printf("Original string: %s\n", text);
		printf("Result: \n");
	while (rdo[i] != NULL)
	{
		printf( "%s\n", rdo[i]);
		i++;
	}
	free(rdo);
	}
	else
		printf("Memory fail.\n");
	return (0);
}*/