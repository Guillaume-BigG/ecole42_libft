/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumebeaudoin <guillaumebeaudoin@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:30:19 by guillaumebe       #+#    #+#             */
/*   Updated: 2023/11/10 11:08:38 by guillaumebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_strlen.c"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (start < 0 || start >= ft_strlen(s) || !s)
		return (NULL);
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
    i = 0;
    while (i < len)
    {
        sub[i] = s[start];
        i++;
        start++;
    }
	sub[i] = '\0';
	return (sub);
}

int	main(void)
{
	const char	*original = "Hello";
	int			start;
	int			len;
	char		*sub;

	start = 10;
	len = 10;
	sub = ft_substr(original, start, len);
	if (sub != NULL)
	{
		printf("Original: %s\n", original);
		printf("Substring: %s\n", sub);
		free(sub);
	}
	return (0);
}
