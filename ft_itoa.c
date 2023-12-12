/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:52:47 by alberrod          #+#    #+#             */
/*   Updated: 2023/12/12 19:50:10 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_simbol(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

static int	get_len(long n, int simbol)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	if (simbol < 0)
		len++;
	return (len);
}

static long	raise_operator(int len)
{
	int	n;

	n = 1;
	while (--len > 1)
		n *= 10;
	return (n);
}

static char	*num_to_str(long num, int len, char *charnum, int simbol)
{
	long	operator;
	int		idx;

	operator = raise_operator(len);
	idx = 0;
	if (simbol < 0)
	{
		*charnum++ = '-';
		idx++;
	}
	while (len-- > 1)
	{
		*charnum++ = (num / operator) + '0';
		num %= operator;
		operator /= 10;
		idx++;
	}
	return (charnum - idx);
}

char	*ft_itoa(int n)
{
	int		simbol;
	int		len;
	long	positive_n;
	char	*out;

	simbol = get_simbol(n);
	positive_n = n * simbol;
	len = get_len(positive_n, simbol);
	out = ft_calloc(len + 1, sizeof(char));
	num_to_str(positive_n, len, out, simbol);
	return (out);
}

/* int	main(void) */
/* { */
/* 	printf("charnum: %s\n", ft_itoa2(-1234)); */
/* 	return (0); */
/* } */
