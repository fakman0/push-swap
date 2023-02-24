/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 19:23:10 by fakman            #+#    #+#             */
/*   Updated: 2023/02/24 19:23:10 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	if (size > 0)
	{
		while (index < (size - 1) && src[index])
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	while (src[index])
		index++;
	return (index);
}
