/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumebeaudoin <guillaumebeaudoin@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:47:25 by gbeaudoi          #+#    #+#             */
/*   Updated: 2023/11/11 10:00:52 by guillaumebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;
	char *s;

	s = (char *)str;
	if (!str)
		return (NULL);
	i = ft_strlen(s);
	if (c == 0)
		return (s + i);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return (s + i);
		i--;
	}
	return (NULL);
}