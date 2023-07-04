/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroyet <aroyet@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 16:14:15 by aroyet            #+#    #+#             */
/*   Updated: 2023/03/02 14:11:53 by aroyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*The memcpy() function copies n bytes from memory area src to memory area dst.
  If dst and src overlap, behavior is undefined.  Applications in which dst and
  src might overlap should use memmove(3) instead.
RETURN VALUES
 The memcpy() function returns the original value of dst.*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	size_t			j;
	unsigned char	*u_dst;
	unsigned char	*u_src;

	u_src = (unsigned char *)src;
	u_dst = (unsigned char *)dst;
	i = 0;
	j = 0;
	if (u_src == NULL && u_dst == NULL)
		return (NULL);
	while (i < n)
	{
		u_dst[j] = u_src[i];
		i++;
		j++;
	}
	return (u_dst);
}
