/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumebeaudoin <guillaumebeaudoin@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:56:44 by guillaumebe       #+#    #+#             */
/*   Updated: 2023/11/07 17:03:15 by guillaumebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

int	main(int argc, char *argv[])
{
	int c;
	(void)argc;

	c = atoi(argv[1]);
	printf("the function isprint gives the result %d\n", isprint(c));
	printf("my own function ft_isprint gives the result %d\n", ft_isprint(c));
}