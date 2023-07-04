/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroyet <aroyet@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:35:51 by aroyet            #+#    #+#             */
/*   Updated: 2023/03/11 00:09:15 by aroyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*The atoi() function converts the initial portion of the string pointed to
     by str to int representation*/
int	ft_atoi(const char *str)
{
	int	nb;
	int	sign;

	sign = 1;
	nb = 0;
	if (*str != '\0')
	{
		while (ft_isspace(*str) == 1)
			str++;
		if (*str == '-')
		{
			sign = -1;
			str++;
		}
		else if (*str == '+')
			str++;
		while (ft_isdigit(*str) == 1)
		{
			nb = nb * 10 + *str - '0';
			str++;
		}
	}
	return (nb * sign);
}
