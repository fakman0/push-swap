/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 08:20:13 by fakman            #+#    #+#             */
/*   Updated: 2023/03/19 08:20:14 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	base_counter(int max)
{
	int	i;

	i = 0;
	while (max)
	{
		max /= 2;
		i++;
	}
	return (i);
}

void	radix(t_stack **stack_a, t_stack **stack_b)
{
	int	size;
	int	base;
	int	wise;

	base = base_counter(lst_size(stack_a));
	wise = 0;
	while (base--)
	{
		size = lst_size(stack_a);
		while (size)
		{
			if ((*stack_a)->tag >> wise & 1)
				ft_rotate(stack_a, 'a');
			else
				ft_push(stack_a, stack_b, 'b');
			size--;
		}
		size = lst_size(stack_b);
		while (size)
		{
			ft_push(stack_a, stack_b, 'a');
			size--;
		}
		wise++;
	}
}
