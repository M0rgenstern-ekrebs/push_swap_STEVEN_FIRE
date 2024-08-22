/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_set_target_nodes_closest_smaller.c        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:41:07 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/22 15:52:30 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/**
 * 
 * brief : target is the biggest smaller than stk_a_value in stk_b
 * (aka closest smaler)
 * returns the ind of the target;
 * 
 * if no good target, target is MAX
 */
static int	ft_target_closest_smaller(int stk_a_value, t_node *stk_b)
{
	t_node	*b;
	long	value_target;
	int		target;
	int		i;

	i = 0;
	target = 0;
	b = stk_b;
	value_target = LONG_MIN;
	while (b)
	{
		if (b->value < stk_a_value && b->value > value_target)
		{
			value_target = b->value;
			target = i;
		}
		i++;
		b = b->next;
	}
	if (value_target == LONG_MIN)
		target = ft_stack_ind_max(stk_b);
	return (target);
}

/**
 * 
 * brief : for each a in stk_a, sets a->target to the ind of target in stk_b.
 * target is the biggest amongst the values smaller than a in stk_b
 * 
 */
void	ft_stack_set_target_nodes_closest_smaller(t_node *stk_a, t_node *stk_b)
{
	t_node	*a;
	int		i;

	a = stk_a;
	i = 0;
	while (a)
	{
		a->target = ft_target_closest_smaller(a->value, stk_b);
		i++;
		a = a->next;
	}
	return ;
}
