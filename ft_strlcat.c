/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroyet <aroyet@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 08:51:10 by aroyet            #+#    #+#             */
/*   Updated: 2023/03/01 09:12:11 by aroyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*strlcat() appends string src to the end of dst.  It will append at most 
dstsize - strlen(dst) - 1 characters.  It willthen NUL-terminate, unless
dstsize is 0 or the original dst string was longer than dstsize (in practice 
this should not happen as it means that either dstsize is incorrect or that dst
 is not a proper string).
 If the src and dst strings overlap, the behavior is undefined.
the strlcpy() and strlcat() functions return the total length of the string 
they tried to create. For strlcat() that means the initial length of dst plus 
the length of src.
If the return value is >= dstsize, the output string has been truncated.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	total_len;

	if (dstsize == 0 && dst == NULL)
		return (ft_strlen(src));
	total_len = ft_strlen(dst) + ft_strlen(src);
	if (dstsize <= ft_strlen(dst) || dstsize == 0)
		return (ft_strlen(src) + dstsize);
	i = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	j = 0;
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (total_len);
}

/*
#include <stdio.h>
#include <string.h>

int main ()
{
	char *src1 = calloc(100, sizeof(char));
	char *src2 = calloc(100, sizeof(char));
	for (int i = 0; i < 99; i++)
	{
		src1[i] = i + 1;
		src2[i] = i + 1;
	}
	printf("Here is mine %zu\n",  ft_strlcat(NULL, src1, 0));
	printf("and here is the real %lu \n", strlcat(NULL, src2, 0));
}*/
