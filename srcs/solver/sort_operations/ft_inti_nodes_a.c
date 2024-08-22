/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inti_nodes_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:15:16 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/22 18:45:41 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	ft_set_cheapest(t_node *stack)
{
	long	cheapest_value;
	t_node	*cheapest;

	if (!stack)
		return ;
	cheapest_value = LONG_MAX;
	while (stack)
	{
		if (stack->push_cost < cheapest_value)
		{
			cheapest_value = stack->push_cost;
			cheapest = stack;
		}
		stack = stack->next;
	}
	cheapest->cheapest = true;
}

/**
 * 
 * brief : sets the targets in a. 
 * for each a targets are biggest smaller than a in b.
 * 
 * 
 */
static void	ft_set_target_a(t_node *a, t_node *b)
{
	t_node	*tmp_b;
	t_node	*target;
	long	biggest_smaller;

	while (a)
	{
		biggest_smaller = LONG_MIN;
		tmp_b = b;
		while (tmp_b)
		{
			if (tmp_b->value < a->value && tmp_b->value > biggest_smaller)
			{
				biggest_smaller = tmp_b->value;
				target = tmp_b;
			}
			tmp_b = tmp_b->next;
		}
		if (biggest_smaller == LONG_MIN)
			a->target = ft_node_max(b);
		else
			a->target = target;
		a = a->next;
	}
}

static void	ft_cost_analysis_a(t_node *a, t_node *b)
{
	int		len_a;
	int		len_b;
	t_node	*stk_a;

	stk_a = a;
	len_a = ft_stack_len(a);
	len_b = ft_stack_len(b);
	while (a)
	{
		a->push_cost = a->ind;
		if (!(ft_is_above_median(stk_a, a->ind)))
			a->push_cost = len_a - (a->ind);
		if (ft_is_above_median(b, a->target->ind))
			a->push_cost += a->target->ind;
		else
			a->push_cost += len_b - (a->target->ind);
		a = a->next;
	}
}

void	ft_init_nodes_a(t_node *a, t_node *b)
{
	if (VERBOSE)
		ft_printf("\t(%s)\n", __func__);
	ft_set_current_index(a);
	ft_set_current_index(b);
	ft_set_target_a(a, b);
	ft_cost_analysis_a(a, b);
	ft_set_cheapest(a);
}
