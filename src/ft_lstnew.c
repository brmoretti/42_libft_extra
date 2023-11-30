/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:31:55 by bmoretti          #+#    #+#             */
/*   Updated: 2023/11/30 16:18:36 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstnew.c
 * @brief Implementation of the ft_lstnew function.
 */

#include "libft.h"

/**
 * @brief Creates a new element for a linked list.
 *
 * This function creates a new element for a linked list with the specified
 * content.
 *
 * @param content The content to be stored in the new element.
 * @return A pointer to the new element, or NULL if memory allocation fails.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*el;

	el = malloc(sizeof(t_list));
	if (el == NULL)
		return (NULL);
	el->content = content;
	el->next = NULL;
	return (el);
}
