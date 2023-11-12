/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumebeaudoin <guillaumebeaudoin@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:20:36 by guillaumebe       #+#    #+#             */
/*   Updated: 2023/11/11 11:07:13 by guillaumebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t total;
	char *calloc;

	total = count * size;
	if (size != 0 && count > (size_t)-1 / size)
		return (NULL);
	if (count < 0 || size < 0)
		return (NULL);
	calloc = malloc(total);
	if (calloc == NULL)
		return (NULL);
	ft_bzero(calloc, total);
	return ((void *)calloc);
}