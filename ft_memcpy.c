/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumebeaudoin <guillaumebeaudoin@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:55:35 by guillaumebe       #+#    #+#             */
/*   Updated: 2023/11/07 20:32:40 by guillaumebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0 || dest == src)
		return (dest);
	while (i < n)
	{
		*(unsigned char *) (dest + i) = *(unsigned char *) (src + i);
		i++;
	}
	return (dest);
}

int	main(int argc, char *argv[])
{
	(void)argc;
	char *src = argv[1];
    char *dest = argv[2];
	char *src2 = argv[1];
    char *dest2 = argv[2];
    
	memcpy(dest, src, 7);
	printf("the function memcpy gives the result %s\n", dest);
	ft_memcpy(dest2, src2, 7);
	printf("my own function ft_memcpy gives the result %s\n", dest2);
}