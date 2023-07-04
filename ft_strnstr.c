/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroyet <aroyet@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:36:14 by aroyet            #+#    #+#             */
/*   Updated: 2023/03/02 14:14:58 by aroyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// man strnstr:
// If needle is an empty string, haystack is returned;
// if needle occurs nowhere in haystack, NULL is returned;

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	if (haystack == NULL && len == 0)
		return (NULL);
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i < len)
		{
			if (j == needle_len - 1)
				return ((char *)haystack + i);
			j++;
			if (len <= (i + j))
				return (NULL);
		}
		i++;
	}
	return (NULL);
}

//#include <stdio.h>
//#include <string.h>
//int main ()
//{
//	char *needle = "il";
//	char *haystack = "kiloilo";
//	int len = 9;
//
////	if (haystack == NULL && *needle == '\0')
////		return (NULL);
////	if (haystack == NULL ** *needle != '\0' && len != 0)
////		-> segfault;
//
//
//	printf("Here is the real strnstr = %s\n", strnstr(haystack, needle, len));
//	printf("Here is ft_strnstr =       %s\n",ft_strnstr(haystack, needle, len));
//}
