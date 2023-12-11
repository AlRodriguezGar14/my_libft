/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:12:11 by alberrod          #+#    #+#             */
/*   Updated: 2023/12/11 21:12:14 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t bytes_copied)
{
	size_t	idx;
	char	*char_dest;
	char	*char_src;

	if (dest == NULL && src == NULL)
		return (NULL);
	idx = 0;
	char_dest = (char *)dest;
	char_src = (char *)src;
	while (idx < bytes_copied)
	{
		char_dest[idx] = char_src[idx];
		idx++;
	}
	return (dest);
}
