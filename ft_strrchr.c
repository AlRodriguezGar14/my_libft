/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:21:01 by alberrod          #+#    #+#             */
/*   Updated: 2023/12/11 21:21:10 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
		idx++;
	while (idx > 0 && str[idx] != (char)c)
	{
		idx--;
	}
	if (str[idx] == (char)c)
		return ((char *)&str[idx]);
	else
		return (NULL);
}
