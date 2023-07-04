/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroyet <aroyet@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 08:53:56 by aroyet            #+#    #+#             */
/*   Updated: 2023/03/10 23:59:04 by aroyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.i
Possible error not specified in the subject are is s == NULL, if len is
big enough to go after the s string and if start is bigger than your str size*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;
	size_t	s_len;

	if (len == 0 || start > ft_strlen(s))
		return (ft_strdup(""));
	s_len = ft_strlen(s + start);
	if (s_len < len)
		new = malloc(sizeof(char) * (s_len + 1));
	else
		new = malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
		new[i++] = s[start++];
	new[i] = '\0';
	return (new);
}
//#include <stdio.h>
//int main ()
//{
//char *s = "libft-test-tokyo";
//printf("%s\n", ft_substr(s, 20, 100));
//
//}
