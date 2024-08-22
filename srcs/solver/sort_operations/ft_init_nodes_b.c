/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_nodes_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:23:58 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/22 18:45:48 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/**
 * 
 * brief : sets the targets in b. 
 * for each b targets are smallest bigger than b in a.
 * 
 * 
 */
static void	ft_set_target_b(t_node *a, t_node *b)
{
	t_node	*tmp_a;
	t_node	*target;
	long	smallest_bigger;

	while (b)
	{
		smallest_bigger = LONG_MAX;
		tmp_a = a;
		while (tmp_a)
		{
			if (tmp_a->value > b->value && tmp_a->value < smallest_bigger)
			{
				smallest_bigger = tmp_a->value;
				target = tmp_a;
			}
			tmp_a = tmp_a->next;
		}
		if (smallest_bigger == LONG_MAX)
			b->target = ft_node_min(a);
		else
			b->target = target;
		b = b->next;
	}
}

void	ft_init_nodes_b(t_node *a, t_node *b)
{
	if (VERBOSE)
		ft_printf("\t(%s)\n", __func__);
	ft_set_current_index(a);
	ft_set_current_index(b);
	ft_set_target_b(a, b);
}
