/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmoretti <brmoretti@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:31:22 by brmoretti         #+#    #+#             */
/*   Updated: 2023/12/19 14:47:01 by brmoretti        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strisdigit.c
 * @brief Implementation of the ft_strisdigit function.
 */

#include "libft.h"

/**
 * @brief Checks if all characters in a string are digits.
 *
 * This function iterates through each character in the input string
 * and checks if it is a digit using the ft_isdigit function.
 *
 * @param str The input string to be checked.
 * @return    1 if all characters are digits, 0 otherwise.
 */
int	ft_strisdigit(const char *str)
{
	while (*str)
		if (!ft_isdigit((int)*(str++)))
			return (0);
	return (1);
}
