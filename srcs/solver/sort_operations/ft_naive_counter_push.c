/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_naive_counter_push.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:21:09 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/21 19:53:37 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

#include "../../push_swap.h"

/**
 * 
 * pushes cheap above target
 * 
 */
static void	ft_push_cheapest_above_target(t_node **stk_a, \
t_node **stk_b, t_node *cheapest)
{
	t_node	*target;

	if (VERBOSE)
		ft_printf("\n\t(%s):\n", __func__);
	target = ft_get_node_i(*stk_b, cheapest->ind_target);
	target->ind = cheapest->ind_target;
	if (VERBOSE)
	{
		ft_printf("\n\t  =>CHEAPEST   ind %d \tvalue %d\tcost %d.\n", \
		cheapest->ind, cheapest->value, cheapest->push_cost);
		ft_printf("\t  =>TARGET     ind %d \tvalue %d\n", \
		target->ind, target->value);
		ft_print_both_stacks(*stk_a, *stk_b);
	}
	if (ft_rotator(stk_a, stk_b, cheapest, target) && VERBOSE)
		ft_print_both_stacks(*stk_a, *stk_b);
	if (VERBOSE)
	{
		ft_printf("\n\t  =>CHEAPEST   %d is now ind 0\n", cheapest->value);
		ft_printf("\t  =>TARGET     %d is now ind 0\n", target->value);
		ft_print_both_stacks(*stk_a, *stk_b);
	}
	if (VERBOSE)
		ft_printf("\n\t(%s):\n", "do_the_push");
	ft_pb(stk_a, stk_b);
}

/**
 * target node is closest smaller
 * 
 * for each node in a
 * 		sets 			ind_target
 * 		deduces & sets 	push_costs
 * then, uses ft_rotator to push cheapest node above its target
 * 
 */
void	ft_naive_push(t_node **stk_a, t_node **stk_b)
{
	t_node	*cheapest;
	int		ind_cheapest;

	if (VERBOSE)
		ft_printf("\n--------------------\n(%s):\n", __func__);
	ft_stack_set_target_nodes(*stk_a, *stk_b);
	ind_cheapest = ft_ind_cheapest(*stk_a, *stk_b);
	cheapest = ft_get_node_i(*stk_a, ind_cheapest);
	cheapest->ind = ind_cheapest;
	if (VERBOSE)
		ft_print_stack_datas(*stk_a, "A");
	ft_push_cheapest_above_target(stk_a, stk_b, cheapest);
	if (VERBOSE)
		ft_print_both_stacks(*stk_a, *stk_b);
}
