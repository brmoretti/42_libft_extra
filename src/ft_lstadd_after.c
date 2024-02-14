/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_after.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmoretti <brmoretti@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:09:02 by brmoretti         #+#    #+#             */
/*   Updated: 2024/02/14 14:21:53 by brmoretti        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstadd_after.c
 * @brief Implementation of the ft_lstadd_after function.
 */

#include "libft.h"

/**
 * Adds a new element after a given reference element in a linked list.
 *
 * @param lst The linked list.
 * @param ref The reference element after which the new element will be added.
 * @param el The new element to be added.
 */
void	ft_lstadd_after(t_list *lst, t_element *ref, t_element *el)
{
	if (!el)
		return ;
	el->next = ref->next;
	if (el->next)
		el->next->prev = el;
	ref->next = el;
	el->prev = ref;
	lst->size++;
}
