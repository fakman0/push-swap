/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 08:26:33 by fakman            #+#    #+#             */
/*   Updated: 2023/03/02 08:26:39 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_stack_pop(t_stack **root)
{
	t_stack	*tmp;

	if (*root == NULL)
	{
		ft_printf("stack is empty!\n");
		return (0);
	}
	tmp = *root;
	*root = (*root)->next;
	free(tmp);
	return (1);
}