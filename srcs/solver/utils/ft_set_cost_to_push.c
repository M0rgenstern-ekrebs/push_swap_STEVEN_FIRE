/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_cost_to_push.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 02:01:48 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/22 15:52:30 by ekrebs           ###   ########.fr       */
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
		a->push_cost = ft_stack_len(stk_a) - ind_a;
	else if (ft_is_above_median(stk_b, a->target))
		a->push_cost += a->target;
	else
		a->push_cost += ft_stack_len(stk_b) - (a->target);
	return (a->push_cost);
}
