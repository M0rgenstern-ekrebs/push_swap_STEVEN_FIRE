/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_set_target_nodes_closest_bigger.c         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 23:14:15 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/22 15:52:30 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/**
 * 
 * brief : target is the smallest bigger than stk_b_value in stk_a
 * (aka closest bigger)
 * returns the ind of the target;
 * 
 * if no good target, target is MIN
 */
static int	ft_target_closest_bigger(int stk_b_value, t_node *stk_a)
{
	t_node	*a;
	long	value_target;
	int		target;
	int		i;

	i = 0;
	target = 0;
	a = stk_a;
	value_target = LONG_MAX;
	while (a)
	{
		if (a->value > stk_b_value && a->value < value_target)
		{
			value_target = a->value;
			target = i;
		}
		i++;
		a = a->next;
	}
	if (value_target == LONG_MAX)
		target = ft_stack_ind_min(stk_a);
	return (target);
}

/**
 * 
 * brief : for each b in stk_b, sets b->target to the ind of target in stk_a.
 * target is the biggest amongst the values smaller than b in stk_a
 * 
 */
void	ft_stack_set_target_nodes_closest_bigger(t_node *stk_a, t_node *stk_b)
{
	t_node	*b;
	int		i;

	b = stk_b;
	i = 0;
	while (b)
	{
		b->target = ft_target_closest_bigger(b->value, stk_a);
		i++;
		b = b->next;
	}
	return ;
}
