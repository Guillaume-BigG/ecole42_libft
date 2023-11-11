/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumebeaudoin <guillaumebeaudoin@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:55:35 by guillaumebe       #+#    #+#             */
/*   Updated: 2023/11/11 09:59:55 by guillaumebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *array, int c, size_t n)
{
	const unsigned char *p = array;
	size_t i;

	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return (void *)(p + i);
		i++;
	}
	return (NULL);
}