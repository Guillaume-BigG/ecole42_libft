/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumebeaudoin <guillaumebeaudoin@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:55:35 by guillaumebe       #+#    #+#             */
/*   Updated: 2023/11/09 11:40:31 by guillaumebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void * ft_memchr(const void *array, int c, size_t n) 
{
    const unsigned char *p = array;
    size_t i;

    i = 0;

    while (i < n) 
    {
        if (p[i] == (unsigned char)c) 
            return (void *)(p + i);
        i++;
    }
    return NULL;
}

int main() {

    char data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    const unsigned int size = 10;

    void * found = ft_memchr( data, 57, size );
    printf( "57 is %s\n", ( found != NULL ? "found" : "not found" ) );

    // On recherche une valeur existante :
    found = ft_memchr( data, 50, size );
    printf( "50 is %s\n", ( found != NULL ? "found" : "not found" ) );
    if ( found != NULL ) {
        printf( "La valeur à la position calculée est %d\n", *((char *) found) );
    }

    return EXIT_SUCCESS;
}

