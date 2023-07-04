/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroyet <aroyet@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 08:58:18 by aroyet            #+#    #+#             */
/*   Updated: 2023/03/01 09:03:32 by aroyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	i;
	size_t	len1;
	size_t	len2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	join = ft_calloc(len1 + len2 + 1, sizeof(char));
	if (join == NULL)
		return (NULL);
	i = 0;
	while (*s1 != '\0')
		join[i++] = *s1++;
	while (*s2 != '\0')
		join[i++] = *s2++;
	join[i] = '\0';
	return (join);
}
