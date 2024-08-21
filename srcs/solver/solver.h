/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:42:50 by mlapique          #+#    #+#             */
/*   Updated: 2024/08/21 19:51:30 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVER_H
# define SOLVER_H

# include "../push_swap.h"

//sorts

void	ft_sort(t_node **stk_a, t_node **stk_b);
void	ft_sort_three(t_node **stk, char *name);

// sort_operations

void	ft_naive_push(t_node **stk_a, t_node **stk_b);
void	ft_naive_counter_push(t_node **stk_a, t_node **stk_b);

int		ft_rotator(t_node **stk_a, t_node **stk_b,	\
t_node *cheapest, t_node *target);

int		ft_counter_rotator(t_node **stk_a, t_node **stk_b,	\
t_node *cheapest, t_node *target);

//utils

int		ft_ind_cheapest(t_node *stk_a, t_node *stk_b);
void	ft_stack_set_target_nodes(t_node *stk_a, t_node *stk_b);
bool	ft_stack_is_sorted_strict_ascending(t_node *stk);
#endif