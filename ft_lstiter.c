/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroyet <aroyet@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:15:43 by aroyet            #+#    #+#             */
/*   Updated: 2023/02/27 21:20:03 by aroyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*Iterates the list ’lst’ and applies the function
’f’ on the content of each node.*/

/*#include <stdio.h>
void Pn(void)
{
	printf("Voila une iteration dans la boucle \n");
}
int main ()
{
	void (*nouveaunomdelafonction)() = &Pn;

	t_list *truc; 
	truc->content = "hello jhkhlh";
	printf("%s\n", truc->content);	
}*/
