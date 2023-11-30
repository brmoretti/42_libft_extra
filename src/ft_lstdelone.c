/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:32:26 by bmoretti          #+#    #+#             */
/*   Updated: 2023/11/30 16:18:00 by bmoretti         ###   ########.fr       */
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
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free (lst);
}
