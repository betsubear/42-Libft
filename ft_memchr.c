/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroyet <aroyet@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:42:30 by aroyet            #+#    #+#             */
/*   Updated: 2023/02/28 09:07:53 by aroyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*     The memchr() function locates the first occurrence of c (converted to an
     unsigned char) in string s.

	 RETURN VALUES
     The memchr() function returns a pointer to the byte located, or NULL if no
     such byte exists within n bytes.*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*u_s;
	unsigned char	u_c;
	size_t			i;

	u_s = (unsigned char *)s;
	u_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (u_s[i] == u_c)
			return (((void *)s + i));
		i++;
	}
	return (NULL);
}
