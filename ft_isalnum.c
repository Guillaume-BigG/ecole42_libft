/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumebeaudoin <guillaumebeaudoin@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:48:06 by guillaumebe       #+#    #+#             */
/*   Updated: 2023/11/06 20:54:37 by guillaumebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
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
	printf("the function isalnum gives the result %d\n", isalnum(c));
	printf("my own function ft_isalnum gives the result %d\n", ft_isalnum(c));
}