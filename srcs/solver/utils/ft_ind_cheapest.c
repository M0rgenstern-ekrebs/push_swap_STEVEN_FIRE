/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ind_cheapest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 20:27:49 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/22 02:34:24 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

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
