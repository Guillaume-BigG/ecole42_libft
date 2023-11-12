/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumebeaudoin <guillaumebeaudoin@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:02:40 by gbeaudoi          #+#    #+#             */
/*   Updated: 2023/11/12 20:11:32 by guillaumebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int len;
	unsigned int i;
	char *mapi;

	i = 0;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	mapi = (char *)malloc(sizeof(char) * (len + 1));
	if (mapi == NULL)
		return (NULL);
	while (s[i])
	{
		mapi[i] = (*f)(i, s[i]);
		i++;
	}
	mapi[i] = '\0';
	return (mapi);
}