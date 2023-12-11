/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:17:07 by alberrod          #+#    #+#             */
/*   Updated: 2023/12/11 21:17:34 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	char	*output;

	if (!s1)
		return (NULL);
	total_len = ft_strlen(s1) + 1 + ft_strlen(s2) + 1;
	output = (char *)ft_calloc(total_len - 1, sizeof(char));
	if (output == NULL)
		return (NULL);
	ft_strlcat(output, (char *)s1, total_len);
	ft_strlcat(output, (char *)s2, total_len);
	return (output);
}
