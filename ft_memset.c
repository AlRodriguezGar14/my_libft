/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:12:54 by alberrod          #+#    #+#             */
/*   Updated: 2023/12/11 21:13:06 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The memset function copies the value of c (converted to an unsigned char)
into each of the first n characters of the object pointed to by s.
*/

// buffer: pointer to dest object
// val: value to be filled - it is an int to be able to pass numbers 
// or chars (ascii) depending on what we need
// len: number of bytes to be filled with val

// Casting to unsigned char is very important to guarantee non-wanted behavior
// and data overflows
// it is also the way the original function operates
#include "libft.h"

void	*ft_memset(void *buffer, int val, size_t len)
{
	unsigned char	*p;

	p = buffer;
	while (len--)
	{
		*p++ = (unsigned char)val;
	}
	return (buffer);
}
