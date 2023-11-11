/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeaudoi <gbeaudoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:16:57 by guillaumebe       #+#    #+#             */
/*   Updated: 2023/11/10 16:36:14 by gbeaudoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t l_src;
	size_t l_dest;

	l_dest = ft_strlen(dst);
    l_src = ft_strlen(src);
	i = l_dest;
	j = 0;
	if (l_dest >= size)
		return (size + l_src);
	else
	{
		while (src[j] && i < size - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (l_dest + l_src);
}