/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 08:20:18 by fakman            #+#    #+#             */
/*   Updated: 2023/03/19 08:20:19 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

//! Moves
void	ft_swap(t_stack **root, char opt);
void	ft_ss(t_stack **root_a, t_stack **root_b);
void	ft_push(t_stack **root_a, t_stack **root_b, char opt);
void	ft_rotate(t_stack **root, char opt);
void	ft_rr(t_stack **root_a, t_stack **root_b);
void	ft_r_rotate(t_stack **root, char opt);
void	ft_rrr(t_stack **root_a, t_stack **root_b);
//! Controls
int		is_duplicate(char **nums);
int		is_number(char **nums);
void	num_control(char **nums);
//! Index Finder
void	index_finder(t_stack **root);
//! Tag Finder
t_stack	*find_last(t_stack **root);
void	tag_finder(t_stack **root, int argc);
//! Push Swap Sort Utils
void	ft_three(t_stack **root, int argc);
int		is_sorted(t_stack **root);
int		lst_size(t_stack **root);
void	ft_two(t_stack **root);
//! Push swap sort
void	push_swap_sort(t_stack **stack_a, t_stack **stack_b);
void	rotater(t_stack **root, int index, char opt);
t_stack	*max_finder(t_stack **root, int tag);
//! push to b
void	push_to_b(t_stack **a, t_stack **b, int argc);
//! RADİX
void	radix(t_stack **stack_a, t_stack **stack_b);
#endif