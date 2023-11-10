/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumebeaudoin <guillaumebeaudoin@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:15:57 by guillaumebe       #+#    #+#             */
/*   Updated: 2023/11/10 11:43:35 by guillaumebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len_join;

	len_join = ft_strlen(s1) + ft_strlen(s2) + 1;
    join = malloc(sizeof(char) * len_join);
    if (!join)
        return (NULL);
    ft_strlcpy(join, s1, len_join);
    ft_strlcat(join, s2, len_join);
    return (join);
}

int	main(void)
{
    const char* prefix = "Hello, ";
    const char* suffix = "World!";

    char* result = ft_strjoin(prefix, suffix);
    if (result != NULL) {
        printf("Result: %s\n", result);
        free(result);
    }
    return 0;
}