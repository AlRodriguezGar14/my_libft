/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:11:45 by alberrod          #+#    #+#             */
/*   Updated: 2023/12/11 21:11:47 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				idx;
	const unsigned char	*a;
	const unsigned char	*b;

	if (!n)
		return (0);
	idx = 0;
	a = s1;
	b = s2;
	while (idx < n - 1)
	{
		if (*a != *b)
			break ;
		idx++;
		a++;
		b++;
	}
	return ((int)*a - (int)*b);
}
