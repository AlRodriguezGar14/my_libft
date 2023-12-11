/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:57:54 by alberrod          #+#    #+#             */
/*   Updated: 2023/12/11 20:59:20 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*assignable;
	size_t	total;
	void	*allocated;

	total = count * size;
	allocated = malloc(total);
	if (allocated == NULL)
		return (NULL);
	assignable = (char *)allocated;
	ft_memset(assignable, 0, total);
	return (allocated);
}
