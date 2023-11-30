/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:55:27 by bmoretti          #+#    #+#             */
/*   Updated: 2023/11/30 16:17:39 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstadd_front.c
 * @brief Implementation of the ft_lstadd_front function.
 */

#include "libft.h"

/**
 * @brief Adds a new element to the front of a linked list.
 *
 * This function adds the given new element to the front of the linked list.
 *
 * @param lst A pointer to a pointer to the head of the list.
 * @param new The element to be added to the front of the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}
