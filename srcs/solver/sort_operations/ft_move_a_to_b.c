/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_a_to_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:20:10 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/22 22:40:20 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	ft_rotate_both(t_node **a, t_node **b, t_node *cheapest)
{
	while (*b != cheapest->target && *a != cheapest)
		ft_rr(a, b);
	ft_set_current_index(*a);
	ft_set_current_index(*b);
}

static void	ft_rev_rotate_both(t_node **a, t_node **b, t_node *cheapest)
{
	while (*b != cheapest->target && *a != cheapest)
		ft_rvrv(a, b);
	ft_set_current_index(*a);
	ft_set_current_index(*b);
}

void	ft_move_a_to_b(t_node **a, t_node **b)
{
	t_node	*cheapest;

	cheapest = ft_get_cheapest(*a);
	if (VERBOSE)
	{
		ft_print_stack_datas(*a, "A");
		ft_printf("\t  =>CHEAPEST:\tn%d :  %d\n", cheapest->ind, \
		cheapest->value);
		ft_printf("\t  =>TARGET  :\tn%d :  %d\n", cheapest->target->ind, \
		cheapest->target->value);
		ft_print_both_stacks(*a, *b);
	}
	if (cheapest->above_median
		&& cheapest->target->above_median)
		ft_rotate_both(a, b, cheapest);
	else if (!(cheapest->above_median)
		&& !(cheapest->target->above_median))
		ft_rev_rotate_both(a, b, cheapest);
	ft_prep_for_push_a(a, cheapest);
	ft_prep_for_push_b(b, cheapest->target);
	ft_pb(a, b);
}
