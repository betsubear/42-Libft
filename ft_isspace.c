/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroyet <aroyet@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:01:27 by aroyet            #+#    #+#             */
/*   Updated: 2023/02/09 19:55:10 by aroyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* The isspace() function tests for the white-space characters.  For any locale,
  this includes the following standard characters:

   ``\t''   ``\n''    ``\v''    ``\f''    ``\r''    `` ''

 In the "C" locale, isspace() successful test is limited to these characters
 only.  The value of the argument must be representable as an unsigned char or
 the value of EOF.*/

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\f' || c == '\v' || (c == '\r')
		|| (c == '\t'))
		return (1);
	else
		return (0);
}
