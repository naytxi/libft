/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:49:23 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/12 12:05:38 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	j;
	int	neg;
	int	nbr;

	j = 0;
	neg = 1;
	nbr = 0;
	while (str[j] == ' ' || str[j] == '\n' || str[j] == '\t'
		|| str[j] == '\v' || str[j] == '\f' || str[j] == '\r')
	{
		j++;
	}
	if (str[j] == '-' || str[j] == '+')
	{
		if (str[j] == '-')
			neg *= -1;
		j++;
	}
	while (str[j] >= '0' && str[j] <= '9')
	{
		nbr = (nbr * 10) + (str[j] - '0');
		j++;
	}
	return (nbr * neg);
}

/*int main (void)
{
	const char *str = "-124vsdw";
	int result = ft_atoi(str);
	printf("result is: %d\n", result);
	return(0);
}*/