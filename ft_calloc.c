/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumebeaudoin <guillaumebeaudoin@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:20:36 by guillaumebe       #+#    #+#             */
/*   Updated: 2023/11/09 17:47:22 by guillaumebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*calloc;
    size_t i;

    i = 0;
	total = count * size;
	if (count == 0 || size == 0)
		return (NULL);
	calloc = malloc(total);
	if (calloc == NULL)
        return NULL;
	while (i < total)
	{
		((char *)calloc)[i] = 0;
        i++;
	}
	return (calloc);
}

int	main(void)
{
	size_t	count;
	size_t	size;
	int		*arr;

	count = 5;
	size = sizeof(int);
	arr = (int *)calloc(count, size);
	if (arr != NULL)
	{
		printf("Memory allocation successful.\n");
		// Print the elements to verify they are initialized to zero
		for (size_t i = 0; i < count; i++)
		{
			printf("arr[%zu] = %d\n", i, arr[i]);
		}
		// Don't forget to free the allocated calloc when done
		free(arr);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}
