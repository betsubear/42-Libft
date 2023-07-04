/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroyet <aroyet@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:43:55 by aroyet            #+#    #+#             */
/*   Updated: 2023/02/09 20:27:35 by aroyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* The memcmp() function compares byte string s1 against byte string s2.  Both
strings are assumed to be n bytes long.

RETURN VALUES
 The memcmp() function returns zero if the two strings are identical, otherwise
 returns the difference between the first two differing bytes (treated as
 unsigned char values, so that `\200' is greater than `\0', for example).
 Zero-length strings are always identical.  This behavior is not required by C
 and portable code should only depend on the sign of the returned value. */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*first;
	unsigned char	*second;

	first = (unsigned char *)s1;
	second = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (first[i] != second[i])
			return (first[i] - second[i]);
		i++;
	}
	return (0);
}
