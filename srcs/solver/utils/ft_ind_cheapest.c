/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ind_cheapest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 20:27:49 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/21 22:32:13 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/**
 * 
 * returns the simulated cost to push
 * to push, we rotate both stacks untils both nodes are on top,
 * 
 * we rotate together while we can, hence the overlapp check
 *  
 * 
 */
static int	ft_set_cost_to_push(t_node	*a, t_node *stk_a, \
t_node *stk_b, int ind_a)
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
 * returns ind of the cheapest to push in stk_a to stk_b
 * 
 * could optimize by leaving early if cost == 0 or cost == 1
 */
int	ft_ind_cheapest(t_node *stk_a, t_node *stk_b)
{
	t_node	*a;
	int		cost;
	int		cost_cheapest;
	int		ind_cheapest;
	int		ind_a;

	ind_a = 0;
	a = stk_a;
	ind_cheapest = 0;
	cost_cheapest = ft_set_cost_to_push(a, stk_a, stk_b, ind_a);
	while (a)
	{
		cost = ft_set_cost_to_push(a, stk_a, stk_b, ind_a);
		if (cost < cost_cheapest)
		{
			cost_cheapest = cost;
			ind_cheapest = ind_a;
		}
		ind_a++;
		a = a->next;
	}
	return (ind_cheapest);
}
