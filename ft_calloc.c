/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroyet <aroyet@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 13:15:10 by aroyet            #+#    #+#             */
/*   Updated: 2023/02/09 18:34:31 by aroyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*target;

	if (count != 0 && size > SIZE_MAX / count)
		return (NULL);
	target = malloc(size * count);
	if (target != NULL)
		ft_bzero(target, size * count);
	return (target);
}
/*  The calloc() function contiguously allocates enough space for count
     objects that are size bytes of memory each and returns a pointer to the
     allocated memory.  The allocated memory is filled with bytes of value
     zero.
	 if target is not NULL it executes ft_bzero, otherwise, it returns target 
	 which is equal to NULL */
