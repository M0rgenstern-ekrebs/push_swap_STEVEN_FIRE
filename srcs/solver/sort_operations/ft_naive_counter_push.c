/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_naive_counter_push.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:21:09 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/22 01:22:27 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

#include "../../push_swap.h"

/**
 * 
 * target is smaller amongst biggers (aka the closet bigger)
 * or MIN if no good target
 * 
 * target in stk_a
 * cheapest in stk_b
 * 
 */
static void	ft_set_targets_bigger_and_costs(t_node **stk_a, \
t_node **stk_b, t_node **cheapest, t_node **target)
{
	int		ind_cheapest;

	if (VERBOSE)
		ft_printf("\t(%s):\n", __func__);
	ft_stack_set_target_nodes_closest_bigger(*stk_a, *stk_b);
	ind_cheapest = ft_ind_cheapest(*stk_b, *stk_a);
	(*cheapest) = ft_get_node_i(*stk_b, ind_cheapest);
	(*cheapest)->ind = ind_cheapest;
	(*target) = ft_get_node_i(*stk_a, (*cheapest)->ind_target);
	(*target)->ind = (*cheapest)->ind_target;
	if (VERBOSE)
	{
		ft_print_stack_datas(*stk_b, "B");
		ft_printf("\n\t  =>CHEAPEST   ind %d \tvalue %d\tcost %d.\n", \
		(*cheapest)->ind, (*cheapest)->value, (*cheapest)->push_cost);
		ft_printf("\t  =>TARGET     ind %d \tvalue %d\n", \
		(*target)->ind, (*target)->value);
		ft_print_both_stacks(*stk_a, *stk_b);
	}
}

/**
 * 
 * pushes cheap above target
 * 
 * target in stk_a
 * cheapest in stk_b
 * 
 */
static void	ft_counter_push_cheapest_above_target(t_node **stk_a, \
t_node **stk_b, t_node *cheapest, t_node *target)
{
	int		moved;

	if (VERBOSE)
		ft_printf("\n\t(%s):\n", __func__);
	moved = ft_counter_rotator(stk_a, stk_b, cheapest, target);
	if (moved > cheapest->push_cost)
	{
		ft_printf("\t (%s):ERROR - didn't do what I said I'd do", __func__);
		exit(127);
	}
	if (VERBOSE && moved)
		ft_print_both_stacks(*stk_a, *stk_b);
	if (VERBOSE)
	{
		ft_printf("\n\t  =>CHEAPEST   %d is now ind 0\n", cheapest->value);
		ft_printf("\t  =>TARGET     %d is now ind 0\n", target->value);
		ft_print_both_stacks(*stk_a, *stk_b);
		ft_printf("\n\t(%s):\n", "do_the_push");
	}
	ft_pa(stk_a, stk_b);
}

/**
 * target node is closest smaller
 * 
 * for each node in a
 * 		sets 			ind_target
 * 		deduces & sets 	push_costs
 * then, uses ft_rotator to push cheapest node above its target
 * 
 * target in stk_a
 * cheapest in stk_b
 * 
 */
void	ft_naive_counter_push(t_node **stk_a, t_node **stk_b)
{
	t_node	*cheapest;
	t_node	*target;

	if (VERBOSE)
	{
		ft_printf("\n----------------------------------");
		ft_printf("\n(%s):\n", __func__);
	}
	ft_set_targets_bigger_and_costs(stk_a, stk_b, &cheapest, &target);
	ft_counter_push_cheapest_above_target(stk_a, stk_b, cheapest, target);
	if (VERBOSE)
		ft_print_both_stacks(*stk_a, *stk_b);
}
