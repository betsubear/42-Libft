/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroyet <aroyet@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 08:57:43 by aroyet            #+#    #+#             */
/*   Updated: 2023/03/06 18:16:38 by aroyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_inset(const char *set, char c)
{
	int		i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	const char	*start;
	const char	*end;
	size_t		len;
	size_t		i;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	start = s1;
	end = s1 + ft_strlen(s1);
	while (ft_inset(set, *start))
		start++;
	if (start < end)
		end--;
	while (ft_inset(set, *end))
		end--;
	len = end - start + 1;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (len-- > 0)
		str[i++] = *start++;
	str[i] = '\0';
	return (str);
}
//#include <stdio.h>
//int	main()
//{
//	printf("%s\n", ft_strtrim(" ", " "));
//}
