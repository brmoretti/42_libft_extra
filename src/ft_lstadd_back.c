/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:29:10 by bmoretti          #+#    #+#             */
/*   Updated: 2023/11/30 16:17:25 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstadd_back.c
 * @brief Implementation of the ft_lstadd_back function.
 */

#include "libft.h"

/**
 * @brief Adds a new element to the end of a linked list.
 *
 * This function adds the given new element to the end of the linked list.
 * If the list is empty, the new element becomes the first element.
 *
 * @param lst A pointer to a pointer to the head of the list.
 * @param new The element to be added to the end of the list.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*el;

	if (!new)
		return ;
	else if (!*lst)
		*lst = new;
	else
	{
		el = *lst;
		while (el->next)
			el = el->next;
		el->next = new;
	}
}
