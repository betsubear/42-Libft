/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroyet <aroyet@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:42:46 by aroyet            #+#    #+#             */
/*   Updated: 2023/02/28 09:58:04 by aroyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*The memmove() function copies len bytes from string src to string dst. The
  two strings may overlap; the copy is always done in a non-destructive manner.
  The memmove() function returns the original value of dst.*/

static void	backwards_copy(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*u_dst;
	unsigned char	*u_src;

	u_dst = (unsigned char *)dst;
	u_src = (unsigned char *)src;
	i = len;
	while (i > 0)
	{
		i--;
		u_dst[i] = u_src[i];
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst > src)
		backwards_copy(dst, src, len);
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
