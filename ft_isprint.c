/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroyet <aroyet@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:25:10 by aroyet            #+#    #+#             */
/*   Updated: 2023/02/09 19:53:21 by aroyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* The isprint() function tests for any printing character, including space
(` ').  The value of the argument must be representable as an unsigned char or
the value of EOF.*/

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}
