/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeaudoi <gbeaudoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:20:36 by guillaumebe       #+#    #+#             */
/*   Updated: 2023/11/10 19:19:46 by gbeaudoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*calloc;
    size_t i;

    i = 0;
	total = count * size;
	if (size != 0 && count > (size_t) - 1 / size)
		return (NULL);
	calloc = malloc(total);
	if (calloc == NULL)
        return NULL;
	ft_bzero(calloc, total);
	return (calloc);
}