/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 08:23:03 by fakman            #+#    #+#             */
/*   Updated: 2023/03/19 08:23:04 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_stack_push(t_stack **root, t_stack *new)
{
	if (!new)
		return ;
	if (*root != NULL)
		new->next = *root;
	*root = new;
}
