/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_finder.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 08:21:04 by fakman            #+#    #+#             */
/*   Updated: 2023/03/19 08:21:05 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_finder(t_stack **root)
{
	int			i;
	t_stack		*tmp;

	i = 1;
	tmp = *root;
	while (tmp)
	{
		tmp->index = i;
		tmp = tmp->next;
		i++;
	}
}
