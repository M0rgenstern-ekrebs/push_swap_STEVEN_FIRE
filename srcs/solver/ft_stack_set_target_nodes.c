/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_set_target_nodes.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:41:07 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/20 21:00:14 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * 
 * brief : target is the smallest bigger than stk_a_value in stk_b
 * returns the index of the target;
 * 
 * if no good target, do I want the first or last ? here I chose first
 */
static int	ft_ind_target(int stk_a_value, t_node *stk_b)
{
	t_node	*b;
	int		value_target;
	int		ind_target;
	int		i;

	i = 0;
	ind_target = 0;
	b = stk_b;
	value_target = b->value;
	while(b)
	{
		if (b->value > stk_a_value && b->value < value_target)
		{
			value_target = b->value;
			ind_target = i;
		}
		i++;
		b = b->next;
	}
	ft_printf("\t\tstk_a %d ind_t = %d", stk_a_value, ind_target);
	return (ind_target);
}

/**
 * 
 * brief : for each a in stk_a, sets a->ind_target to the index of target in stk_b.
 * target is the smallest bigger value in stk_b
 * 
 */
void	ft_stack_set_target_nodes(t_node *stk_a, t_node *stk_b)
{
	t_node	*a = stk_a;
	int		i;

	if (VERBOSE)
	{
		ft_printf("\n(%s):\n\n", __func__);
		ft_print_both_stacks(stk_a, stk_b);
	}
	i = 0;
	while (a)
	{
		a->ind_target = ft_ind_target(stk_a->value, stk_b);
		i++;
		a = a->next;
	}
	if (VERBOSE)
		ft_print_stack_datas(stk_a, "A");
	return ;
}
