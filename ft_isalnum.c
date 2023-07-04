/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroyet <aroyet@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:16:48 by aroyet            #+#    #+#             */
/*   Updated: 2023/02/09 18:36:36 by aroyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The isalnum() function tests for any character for which isalpha(3) or
     isdigit(3) is true.  The value of the argument must be representable as
     an unsigned char or the value of EOF.
	 RETURN VALUES:
     The isalnum() function returns zero if the character tests false and
     returns non-zero if the character tests true.*/
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	else
		return (0);
}
