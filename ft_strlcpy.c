/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:18:36 by alberrod          #+#    #+#             */
/*   Updated: 2023/12/11 21:18:38 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Guarantees the null termination when there's space
// Avoids buffer overflows
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	idx;
	size_t	len;

	len = ft_strlen(src);
	if (size <= 0)
		return (len);
	idx = 0;
	while (idx < size - 1 && src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (len);
}

// int main(void)
// {
//	   char    dest[10] = {0};
//	   char    src[] = "Hello";
//	   ft_strlcpy(dest, src, 3);
//	   printf("dest: %s\n", dest);
//	   return (0);
// }
