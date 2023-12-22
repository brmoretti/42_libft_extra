/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmoretti <brmoretti@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:40:40 by brmoretti         #+#    #+#             */
/*   Updated: 2023/12/22 15:54:09 by brmoretti        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstpop.c
 * @brief Implementation of the ft_lstpop function.
 */

#include "libft.h"

/**
 * Removes and returns an element from a linked list at the specified index.
 *
 * @param lst The linked list from which to remove the element.
 * @param index The index of the element to be removed.
 * @return The removed element, or NULL if the index is out of range.
 */
t_element	*ft_lstpop(t_list *lst, int index)
{
	t_element	*el;

	el = ft_lstpickel(lst, index);
	if (!el)
		return (NULL);
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
	el->next = NULL;
	el->prev = NULL;
	lst->list_size--;
	return (el);
}
