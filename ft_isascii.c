/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumebeaudoin <guillaumebeaudoin@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:45:12 by guillaumebe       #+#    #+#             */
/*   Updated: 2023/11/07 16:49:56 by guillaumebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
		return (0);
}

int	main(int argc, char *argv[])
{
	int c;
	(void)argc;

	c = atoi(argv[1]);
	printf("the function isascii gives the result %d\n", isascii(c));
	printf("my own function ft_isascii gives the result %d\n", ft_isascii(c));
}