/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 19:22:18 by fakman            #+#    #+#             */
/*   Updated: 2023/02/24 19:22:18 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_stack_push(t_stack **root, t_stack *new)
{
	if (!new)
		return ;
	if (*root != NULL)
		new->next = *root;
	*root = new;
}
