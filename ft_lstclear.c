/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroyet <aroyet@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:15:13 by aroyet            #+#    #+#             */
/*   Updated: 2023/02/22 15:25:52 by aroyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next_element;

	current = *lst;
	while (current != NULL)
	{
		next_element = current->next;
		ft_lstdelone(current, del);
		current = next_element;
	}
	*lst = NULL;
}
/*Supprime et libère la mémoire de l’élément passé en
paramètre, et de tous les éléments qui suivent, à
l’aide de ’del’ et de free(3)
Enfin, le pointeur initial doit être mis à NULL.
lst: L’adresse du pointeur vers un élément.
del: L’adresse de la fonction permettant de
supprimer le contenu d’un élément.*/
