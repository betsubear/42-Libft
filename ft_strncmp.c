/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroyet <aroyet@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 08:52:02 by aroyet            #+#    #+#             */
/*   Updated: 2023/03/01 10:08:44 by aroyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*u_s1;
	unsigned char	*u_s2;
	size_t			i;

	if (n == 0)
		return (0);
	i = 0;
	u_s1 = (unsigned char *)s1;
	u_s2 = (unsigned char *) s2;
	while (u_s1[i] == u_s2[i] && i < n - 1
		&& u_s1[i] != '\0' && u_s2[i] != '\0')
		i++;
	return (u_s1[i] - u_s2[i]);
}
