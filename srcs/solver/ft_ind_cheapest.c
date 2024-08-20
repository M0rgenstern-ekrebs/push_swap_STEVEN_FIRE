/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ind_cheapest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 20:27:49 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/20 20:55:13 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * 
 * returns the simulated cost to push
 * to push, we rotate both stacks untils both nodes are on top,
 * 
 * we rotate together while we can, 
 * rr if  
 * 
 */
int	ft_cost_to_push(t_node	*a, t_node *stk_a, t_node	*stk_b, int ind_a)
{
	int	median_a;
	int	median_b;
	int	cost;
	int len_a_to_top;
	int len_target_to_top;

	median_a = ft_stack_median(stk_a);
	median_b = ft_stack_median(stk_b);
	if (a->ind_target >= median_b)
		len_target_to_top = (ft_stack_length(stk_b) - a->ind_target) * -1;
	else 
		len_target_to_top = a->ind_target + 1;
	if (ind_a >= median_a)
		len_a_to_top = (ft_stack_length(stk_a) - ind_a) * -1;
	else 
		len_a_to_top = a->ind_target + 1;

	//prix overlap + prix seul + push
	cost = 0;
	if ((ind_a >= median_a) && (a->ind_target >= median_b))
	{
		
	}
	else if (!(ind_a >= median_a) && !(a->ind_target >= median_b))
	{
		
	}
	else if ((ind_a >= median_a) && !(a->ind_target >= median_b))
	{
		
	}
	else if (!(ind_a >= median_a) && (a->ind_target >= median_b))
	{
		
	}
	return (cost);
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
	cheapest_cost = ft_cost_to_push(a, stk_a, stk_b, ind_a);
	while (a)
	{
		cost = ft_cost_to_push(a, stk_a, stk_b, ind_a);
		if (cost < cheapest_cost)
		{
			cheapest_cost = cost;
			ind_cheapest = ind_a;
		}
		ind_a++;
		a = a->next;
	}
	return (ind_cheapest);
}