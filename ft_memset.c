/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumebeaudoin <guillaumebeaudoin@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:15:44 by guillaumebe       #+#    #+#             */
/*   Updated: 2023/11/07 18:30:02 by guillaumebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(str + i) = (unsigned char)c;
		i++;
	}
	return (str);
}

int	main(int argc, char *argv[])
{
	(void)argc;
	char *str = argv[1];
	memset(str + 2, '#', 3);
	printf("the function memset gives the result %s\n", str);
	char *str2 = argv[2];
	ft_memset(str2 + 2, '#', 3);
	printf("my own function ft_memset gives the result %s\n", str2);
}