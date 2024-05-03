/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:23:48 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/18 13:11:43 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nlen(int number)
{
	int	lenght;

	lenght = 0;
	if (number <= 0)
		lenght++;
	while (number != 0)
	{
		number = number / 10;
		lenght++;
	}
	return (lenght);
}

char	*ft_itoa(int n)
{
	int			lenght;
	char		*nb;
	const char	*digit;

	lenght = ft_nlen(n);
	digit = "0123456789";
	nb = (char *)malloc(sizeof(char) * (lenght + 1));
	if (!nb)
		return (NULL);
	nb[lenght] = '\0';
	if (n == 0)
		nb[0] = '0';
	if (n < 0)
		nb[0] = '-';
	while (n)
	{
		if (n > 0)
			nb[--lenght] = digit[n % 10];
		else
			nb[--lenght] = digit[(n % 10) * -1];
		n /= 10;
	}
	return (nb);
}

/*int main(void)
{
	int num = 15;
	char *text = ft_itoa(num);
	printf("result: %s\n", text);
	free(text);
	return(0);
}*/