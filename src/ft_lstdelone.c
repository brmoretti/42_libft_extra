/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmoretti <brmoretti@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:32:26 by bmoretti          #+#    #+#             */
/*   Updated: 2023/12/22 16:00:32 by brmoretti        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstdelone.c
 * @brief Implementation of the ft_lstdelone function.
 */

#include "libft.h"

/**
 * @brief Deletes a single element from a linked list.
 *
 * This function deletes the specified element `lst` from the linked list.
 * The content of the element is deleted using the provided deletion function
 * `del`.
 *
 * @param lst The element to be deleted.
 * @param del The function used to delete the content of the element.
 *            If NULL, the content will not be deleted.
 */
void	ft_lstdelone(t_list *lst, t_element *el, void (*del)(void*))
{
	if (!el)
		return ;
	if (lst)
	{
		if (el != lst->first && el != lst->last)
		{
			el->prev->next = el->next;
			el->next->prev = el->prev;
		}
		if (el == lst->first)
		{
			lst->first = el->next;
			lst->first->prev = NULL;
		}
		if (el == lst->last)
		{
			lst->last = el->prev;
			lst->last->next = NULL;
		}
	}
	del(el->content);
	free (el);
	lst->size--;
}
