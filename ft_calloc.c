/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:46:03 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/12 13:18:51 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = malloc(num * size);
	if (ptr != NULL)
	{
		ft_bzero(ptr, num * size);
		return (ptr);
	}
	return (NULL);
}

/*int main(void)
{
	int *dbr;
	dbr = (int *) ft_calloc(9, sizeof(int));
	printf("values %d %d %d %d %d %d %d %d %d\n", dbr[0], dbr[1], 
	dbr[2], dbr[3], dbr[4], dbr[5], dbr[6], dbr[7], dbr[8]);
	free(dbr);
	return(0);
}*/