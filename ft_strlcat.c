/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumebeaudoin <guillaumebeaudoin@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:16:57 by guillaumebe       #+#    #+#             */
/*   Updated: 2023/11/10 11:39:22 by guillaumebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.c"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t l_src;
	size_t l_dest;

	l_dest = ft_strlen(dst);
    l_src = ft_strlen(src);
	i = l_dest;
	j = 0;
	if (l_dest >= size)
		return (size + l_src);
	else
	{
		while (src[j] && i < size - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (l_dest + l_src);
}


/* int	main(void)
{
	char	source[7] = "bb";
	char	dest[100] = "aaaa";
	char	source1[7] = "bb";
	char	dest1[100] = "aaaa";
	unsigned int size = 7;

	printf("%zu\n", strlcat(dest, source, size));
	printf("%s\n", dest);
	printf("%zu\n", ft_strlcat(dest1, source1, size));
	printf("%s\n", dest1);
}
 */