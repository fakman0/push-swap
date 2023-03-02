/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 08:24:24 by fakman            #+#    #+#             */
/*   Updated: 2023/03/02 08:24:25 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(t_stack **stack, char **args)
{
	int		i;

	i = 1;
	while (args[i])
	{
		ft_stack_push(stack, ft_stack_new(ft_atoi(args[i])));
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc < 2)
		exit(ft_printf("Error\ntoo few arguments!"));
	num_control(argv);
	init(&a, argv);
}
