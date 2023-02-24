/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_peek.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 19:22:10 by fakman            #+#    #+#             */
/*   Updated: 2023/02/24 19:22:10 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*ft_stack_peek(t_stack **root)
{
	t_stack	*r_val;

	if (*root == NULL)
	{
		ft_printf("Stack is empty!");
		return (NULL);
	}
	r_val = (t_stack *)malloc(sizeof(t_stack));
	r_val->num = (*root)->num;
	r_val->tag = (*root)->tag;
	r_val->next = (*root)->next;
	return (r_val);
}
