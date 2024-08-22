/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_b_to_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:24:23 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/22 22:30:45 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_move_b_to_a(t_node **a, t_node **b)
{
	if (VERBOSE)
	{
		ft_print_stack_datas(*b, "B");
		ft_printf("\t   =>TARGET: n%d - %d\n", (*b)->target->ind, \
		(*b)->target->value);
		if ((*b)->target->above_median)
			ft_printf("\t   =>TARGET ABOVE MEDIAN\n");
		else
			ft_printf("\t   =>TARGET UNDER MEDIAN\n");
		ft_print_both_stacks(*a, *b);
	}
	ft_prep_for_push_a(a, (*b)->target);
	ft_pa(a, b);
}
