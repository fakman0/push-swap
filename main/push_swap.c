/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 08:20:30 by fakman            #+#    #+#             */
/*   Updated: 2023/03/19 08:20:31 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(t_stack **stack_a, t_stack **stack_b, char **args)
{
	int		i;
	t_stack	*tmp;
	t_stack	*p_val;

	i = 1;
	while (args[i])
	{
		ft_stack_push(stack_b, ft_stack_new(ft_atoi(args[i]), 0, 0));
		i++;
	}
	while (*stack_b)
	{
		tmp = ft_stack_peek(stack_b);
		p_val = ft_stack_new(tmp->num, 0, 0);
		ft_stack_push(stack_a, p_val);
		ft_stack_pop(stack_b);
		free(tmp);
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc < 2)
		exit(0);
	num_control(argv);
	init(&a, &b, argv);
	tag_finder(&a, argc);
	index_finder(&a);
	if (is_sorted(&a))
		exit(0);
	if (argc < 80)
		push_swap_sort(&a, &b);
	else
		radix(&a, &b);
}
