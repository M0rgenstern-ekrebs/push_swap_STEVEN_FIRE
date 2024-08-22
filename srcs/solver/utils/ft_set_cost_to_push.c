/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_cost_to_push.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 02:01:48 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/22 02:35:28 by m0rgenstern      ###   ########.fr       */
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
int	ft_set_cost_to_push(t_node	*a, t_node *stk_a, \
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
