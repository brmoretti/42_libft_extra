/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:44:21 by bmoretti          #+#    #+#             */
/*   Updated: 2023/11/30 16:17:52 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstclear.c
 * @brief Implementation of the ft_lstclear function.
 */

#include "libft.h"

/**
 * @brief Deletes and frees all elements in a linked list.
 *
 * This function deletes and frees all elements in the linked list pointed to
 * by `lst` using the provided deletion function `del`. The head of the list is
 * set to NULL after the operation.
 *
 * @param lst A pointer to a pointer to the head of the list.
 * @param del The function used to delete the content of each element.
 *            If NULL, the content will not be deleted.
 */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*el;
	t_list	*next_el;

	if (!lst || !*lst)
		return ;
	el = *lst;
	while (el)
	{
		next_el = el->next;
		ft_lstdelone(el, del);
		el = next_el;
	}
	*lst = NULL;
}
