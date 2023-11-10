/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumebeaudoin <guillaumebeaudoin@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:17:16 by guillaumebe       #+#    #+#             */
/*   Updated: 2023/11/10 09:26:27 by guillaumebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.c"
#include<stdlib.h>

char	*ft_strdup(const char *src)
{
	size_t	i;
	char	*dup;

	i = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * (i + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	main(void)
{
	char	src[] = "Let's go Pikachu";
	char	*dup;

	dup = ft_strdup(src);
	printf("%s\n", dup);
}
