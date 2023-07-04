/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroyet <aroyet@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 08:18:13 by aroyet            #+#    #+#             */
/*   Updated: 2023/03/02 17:12:56 by aroyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + len);
	i = len;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		if (i == 0)
			break ;
		i--;
	}
	return (NULL);
}
/*
char	*ft_strrchr(const char *s, int c)
{
	int	len;

	if (s == NULL)
		return (NULL);
	len = ft_strlen((char *)s);
	while (s[len] != c && len != 0)
		len--;
//	printf("here is len after loop : %d\n",len);
	if (s[len] == c)
		return ((char *)&s[len]);
	return (NULL);
}*//*
#include <string.h>
#include <stdio.h>
int main ()
{
	const char *s = "libft-test-iciparis";
	printf("Real function %p\n",strrchr(s, 'z'));
	printf("My function   %p\n",ft_strrchr(s, 'z'));
	return (0);
 }*/
