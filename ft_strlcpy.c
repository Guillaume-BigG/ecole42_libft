/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumebeaudoin <guillaumebeaudoin@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:45:45 by guillaumebe       #+#    #+#             */
/*   Updated: 2023/11/09 15:09:27 by guillaumebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.c"

int		ft_strlen(const char *str);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	if (!src)
		return (0);
	len = ft_strlen(src);
	i = 0;
	if (!size || !dst)
		return (len);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

int	main(void)
{
	char	original[10] = "hello";
	char	copy[15] = "my friend";
	char	copy2[15] = "my friend";
    int size = 15;

	printf("%zu et %s\n", ft_strlcpy(copy, original, size), copy);
	printf("%lu et %s\n", strlcpy(copy2, original, size), copy2);
}
