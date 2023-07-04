/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroyet <aroyet@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 08:56:54 by aroyet            #+#    #+#             */
/*   Updated: 2023/03/06 18:18:33 by aroyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Allocates (with malloc(3)) and returns a string representing the integer 
received as an argument. Negative numbers must be handled.
Return value  = The string representing the integer.
NULL if the allocation fails.*/

static int	ft_countdigit(int number)
{
	int		count;

	count = 0;
	if (number == 0)
		return (count + 1);
	if (number < 0)
	{
		number = -number;
		count++;
	}
	while (number != 0)
	{
		number = number / 10;
		count++;
	}
	return (count);
}

static int	ft_sign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	long	number;
	int		len;
	char	*new;

	number = (long)n;
	len = ft_countdigit(number);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	new[len] = '\0';
	len--;
	if (number < 0)
		number = -number;
	while (len >= 0)
	{
		new[len] = (number % 10) + '0';
		len--;
		number = number / 10;
	}
	if (ft_sign(n) == 1)
		new[0] = '-';
	return (new);
}
