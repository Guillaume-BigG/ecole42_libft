/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumebeaudoin <guillaumebeaudoin@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:29:16 by guillaumebe       #+#    #+#             */
/*   Updated: 2023/11/06 20:43:09 by guillaumebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
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
	printf("the function isdigit gives the result %d\n", isdigit(c));
	printf("my own function ft_isdigit gives the result %d\n", ft_isdigit(c));
}