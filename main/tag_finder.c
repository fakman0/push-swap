/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tag_finder.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 08:20:08 by fakman            #+#    #+#             */
/*   Updated: 2023/03/19 08:20:09 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_last(t_stack **root)
{
	int		max;
	t_stack	*iterator;
	t_stack	*tmp;

	iterator = *root;
	tmp = *root;
	max = iterator->num;
	while (iterator)
	{
		if (iterator->num > max)
		{
			tmp = iterator;
			max = tmp->num;
		}
		iterator = iterator->next;
	}
	return (tmp);
}

void	tag_finder(t_stack **root, int argc)
{
	t_stack	*max;
	t_stack	*iter;
	int		tag;

	tag = 1;
	while (argc > 1)
	{
		iter = *root;
		max = find_last(root);
		while (iter)
		{
			if (iter->num < max->num && iter->tag == 0)
				max = iter;
			iter = iter->next;
		}
		max->tag = tag;
		tag++;
		argc--;
	}
}
