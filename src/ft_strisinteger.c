/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisinteger.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmoretti <brmoretti@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:54:12 by brmoretti         #+#    #+#             */
/*   Updated: 2023/12/20 13:53:28 by brmoretti        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strisinteger.c
 * @brief Implentation of the ft_strisinteger function
 */

/**
 * @brief Checks if a string is an integer.
 *
 * @param str The string to check.
 * @return 1 if the string is an integer, 0 otherwise.
 */
int	ft_strisinteger(const char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
		if (!('0' <= *str && *str <= '9'))
			return (0);
	return (1);
}
