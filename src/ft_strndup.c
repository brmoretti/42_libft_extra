/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 12:48:11 by bmoretti          #+#    #+#             */
/*   Updated: 2024/01/05 13:00:02 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*ptr;
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	if (n < i)
		i = n;
	ptr = malloc(i + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s && *s && i < n)
		ptr[i++] = *s++;
	ptr[i] = '\0';
	return (ptr);
}
