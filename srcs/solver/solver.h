/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:42:50 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/22 02:32:01 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVER_H
# define SOLVER_H

# include "../push_swap.h"

//sorts

void	ft_sort(t_node **stk_a, t_node **stk_b);
void	ft_sort_three(t_node **stk, char *name);
void	ft_sort_small(t_node **stk_a, int argc);

// sort_operations

void	ft_naive_push(t_node **stk_a, t_node **stk_b);
void	ft_naive_counter_push(t_node **stk_a, t_node **stk_b);
int		ft_rotator(t_node **stk_a, t_node **stk_b,	\
t_node *cheapest, t_node *target);
int		ft_counter_rotator(t_node **stk_a, t_node **stk_b,	\
t_node *cheapest, t_node *target);

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