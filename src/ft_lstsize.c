/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:19:20 by bmoretti          #+#    #+#             */
/*   Updated: 2023/11/30 16:18:45 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstsize.c
 * @brief Implementation of the ft_lstsize function.
 */

#include "libft.h"

/**
 * @brief Counts the number of elements in a linked list.
 *
 * This function counts the number of elements in the linked list pointed to
 * by `lst`.
 *
 * @param lst The pointer to the head of the list.
 * @return The number of elements in the list.
 */
int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
