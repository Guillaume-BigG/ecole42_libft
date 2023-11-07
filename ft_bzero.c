/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bezero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumebeaudoin <guillaumebeaudoin@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:42:27 by guillaumebe       #+#    #+#             */
/*   Updated: 2023/11/07 18:51:10 by guillaumebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(str + i) = '\0';
		i++;
	}
}

int	main(int argc, char *argv[])
{
	(void)argc;
	char *str = argv[1];
	bzero(str, 3);
	printf("the function bzero gives the result %s\n", str);
	char *str2 = argv[2];
	ft_bzero(str2, 3);
	printf("my own function ft_bezero gives the result %s\n", str2);
}