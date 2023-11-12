/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumebeaudoin <guillaumebeaudoin@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:48:21 by guillaumebe       #+#    #+#             */
/*   Updated: 2023/11/12 21:44:53 by guillaumebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *p1 = (unsigned char *)s1;
	unsigned char *p2 = (unsigned char *)s2;
	size_t i;

	i = 0;
	while (i < n && *(p1 + i) == *(p2 + i))
		i++;
	if (i < n)
		return (*(p1 + i) - *(p2 + i));
	return (0);
}