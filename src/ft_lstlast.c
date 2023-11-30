/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:56:08 by bmoretti          #+#    #+#             */
/*   Updated: 2023/11/30 16:18:20 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstlast.c
 * @brief Implementation of the ft_lstlast function.
 */

#include "libft.h"

/**
 * @brief Returns the last element of a linked list.
 *
 * This function returns a pointer to the last element of the linked list.
 * If the list is empty, it returns NULL.
 *
 * @param lst The pointer to the head of the list.
 * @return A pointer to the last element of the list, or NULL if the list is
 *         empty.
 */
t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}
