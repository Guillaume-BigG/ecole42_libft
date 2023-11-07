/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumebeaudoin <guillaumebeaudoin@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:43:22 by guillaumebe       #+#    #+#             */
/*   Updated: 2023/11/07 22:14:01 by guillaumebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
    unsigned char* bdest;
    unsigned char* bsrc;

    bdest = (unsigned char*) dest;
    bsrc = (unsigned char*) src;
    
	i = 0;
	if (!src && !dest)
		return (dest);
	if (bdest > bsrc)
	{
    	while (++i < n)
		{
            bdest[n - i] = bsrc[n - i];
        }
    }
	else
	{
        while (n > 0)
		{
            *(bdest++) = *(bsrc++);
            n--;
        }
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
    
	memmove(dest, src, 3);
	printf("the function memmove gives the result %s\n", dest);
	ft_memmove(dest2, src2, 3);
	printf("my own function ft_memmove gives the result %s\n", dest2);
}