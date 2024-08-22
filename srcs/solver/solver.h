/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:42:50 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/22 16:42:58 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVER_H
# define SOLVER_H

# include "../push_swap.h"

//sorts

void	ft_sort_three(t_node **stk, char *name);
void	ft_sort_small(t_node **stk_a, int argc);
void	ft_set_current_index(t_node *stk);
void	ft_turk_sort(t_node **stk_a, t_node **stk_b);

// sort_operations
t_node	*ft_get_cheapest(t_node *stack);
void	ft_init_nodes_b(t_node *a, t_node *b);
void	ft_init_nodes_a(t_node *a, t_node *b);
void	ft_move_a_to_b(t_node **a, t_node **b);
void	ft_move_b_to_a(t_node **a, t_node **b);
void	ft_prep_for_push_a(t_node **stack, t_node *top);
void	ft_prep_for_push_b(t_node **stack, t_node *top);

//utils

int		ft_ind_cheapest(t_node *stk_a, t_node *stk_b);
bool	ft_stack_is_sorted_strict_ascending(t_node *stk);
void	ft_push_the_firsts(t_node **stk_a, t_node **stk_b, int *len_a);
void	ft_put_min_on_top(t_node **stk);
void	ft_stack_set_target_nodes_closest_bigger(t_node *stk_a,	\
t_node *stk_b);
void	ft_stack_set_target_nodes_closest_smaller(t_node *stk_a,	\
t_node *stk_b);
int		ft_set_cost_to_push(t_node	*a, t_node *stk_a,	\
t_node *stk_b, int ind_a);
#endif