/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeaudoi <gbeaudoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:47:25 by gbeaudoi          #+#    #+#             */
/*   Updated: 2023/11/10 19:10:56 by gbeaudoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char* ft_strrchr(const char * str, int c)
{
    int i;
    char* s;

    s = (char*) str;
    if (!str)
        return (NULL);
    i = ft_strlen(s);
    if (c == 0)
        return (s + i);
    while (i >= 0)
    {
        if (s[i] == (char) c)
            return (s + i);
        i--;
    }
    return (NULL);
}