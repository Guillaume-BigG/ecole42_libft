/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumebeaudoin <guillaumebeaudoin@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:51:15 by guillaumebe       #+#    #+#             */
/*   Updated: 2023/11/09 16:10:30 by guillaumebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!need[i])
		return ((char *)hay);
	while (hay[i] && i < len)
	{
		j = 0;
		while ((j + i) < len && need[j] == hay[i + j])
		{
			if (!need[j + 1])
				return ((char *)hay + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	const char	*haystack = "This is a sample string to search within.";
	const char	*needle = "sample";
	char		*result;
	char		*result2;

	result = strnstr(haystack, needle, strlen(haystack));
	result2 = strnstr(haystack, needle, strlen(haystack));
    printf("the real function give the result %s\n", result);
    printf("while my function give the result %s\n", result2);
}
