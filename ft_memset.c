/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroyet <aroyet@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:42:15 by aroyet            #+#    #+#             */
/*   Updated: 2023/02/28 16:53:31 by aroyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* The memset() function writes len bytes of value c (converted to an unsigned
char) to the string b.
RETURN VALUES = The memset() function returns its first argument.*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*u_b;
	unsigned char	u_c;
	size_t			i;

	u_b = (unsigned char *)b;
	u_c = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		u_b[i] = u_c;
		i++;
	}
	return (b);
}
