/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumebeaudoin <guillaumebeaudoin@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:51:15 by guillaumebe       #+#    #+#             */
/*   Updated: 2023/11/12 21:37:31 by guillaumebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (!need[i])
		return ((char *)hay);
	if (len == 0)
		return (NULL);
	while (hay[i] && i < len)
	{
		j = 0;
		while ((j + i) < len && need[j] == hay[i + j] && hay[i])
		{
			if (!need[j + 1])
				return ((char *)hay + i);
			j++;
		}
		i++;
	}
	return (NULL);
}