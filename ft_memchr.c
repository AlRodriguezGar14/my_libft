/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:11:17 by alberrod          #+#    #+#             */
/*   Updated: 2023/12/11 22:17:05 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// First instance of uint char c in n bytes of the memory block starting at str
// n is very important because if not memchr doesn't know when to stop
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				idx;
	const unsigned char	*content;

	idx = -1;
	content = str;
	while (++idx < n)
	{
		if (*content == (unsigned char)c)
			return ((void *)content);
		content++;
	}
	return (NULL);
}
