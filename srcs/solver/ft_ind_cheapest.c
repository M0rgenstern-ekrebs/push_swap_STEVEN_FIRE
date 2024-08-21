/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ind_cheapest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 20:27:49 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/20 22:59:44 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * 
 * returns the simulated cost to push
 * to push, we rotate both stacks untils both nodes are on top,
 * 
 * we rotate together while we can, hence the overlapp check
 *  
 * 
 */
int	ft_set_cost_to_push(t_node	*a, t_node *stk_a, t_node	*stk_b, int ind_a)
{
	a->push_cost = ind_a;
	if (!ft_is_above_median(stk_a, ind_a))
		a->push_cost = ft_stack_length(stk_a) - ind_a;
	else if (ft_is_above_median(stk_b, a->ind_target))
		a->push_cost += a->ind_target;
	else
		a->push_cost += ft_stack_length(stk_b) - (a->ind_target);
	return (a->push_cost);
}

/**
 * 
 * returns index of the cheapest to push in stk_a to stk_b
 * 
 * 
 */
int	ft_ind_cheapest(t_node *stk_a, t_node *stk_b)
{
	t_node	*a = stk_a;
	int		cost;
	int		cheapest_cost;
	int		ind_cheapest;
	int		ind_a;

	ind_a = 0;
	a = stk_a;
	ind_cheapest = 0;
	cheapest_cost = ft_set_cost_to_push(a, stk_a, stk_b, ind_a);
	while (a)
	{
		cost = ft_set_cost_to_push(a, stk_a, stk_b, ind_a);
		if (cost < cheapest_cost)
		{
			cheapest_cost = cost;
			ind_cheapest = ind_a;
		}
		ind_a++;
		a = a->next;
	}
	if (VERBOSE)
		ft_printf("\t  =>CHEAPEST is n %d: cost of %d\n", ind_cheapest, cheapest_cost);
	return (ind_cheapest);
}
