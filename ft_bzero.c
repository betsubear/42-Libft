/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroyet <aroyet@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:36:33 by aroyet            #+#    #+#             */
/*   Updated: 2023/02/09 18:32:50 by aroyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*     The bzero() function writes n zeroed bytes to the string s.  If n is
     zero, bzero() does nothing.*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
