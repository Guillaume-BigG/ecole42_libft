/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumebeaudoin <guillaumebeaudoin@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:19:52 by guillaumebe       #+#    #+#             */
/*   Updated: 2023/11/06 20:15:34 by guillaumebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
	printf("the function isalpha gives the result %d\n", isalpha(c));
	printf("my own function ft_isalpha gives the result %d\n", ft_isalpha(c));
}