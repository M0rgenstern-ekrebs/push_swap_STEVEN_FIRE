/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_counter_rotator.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:35:42 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/21 20:14:21 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/**
 * 
 * brief: depending of if the new wanted top is above or under median
 * either rotates or reverse rotates to put the new top there
 * 
 */
static int	solo_rotate_a(t_node **stk, t_node *new_top)
{
	int	moved;

	moved = 0;
	if (*stk != new_top)
	{
		if (VERBOSE)
			ft_printf("\n\t  (%s):\n", __func__);
		if (ft_is_above_median(*stk, new_top->ind))
		{
			while (*stk != new_top)
			{
				ft_ra(stk);
				moved++;
			}
		}
		else
		{
			while (*stk != new_top)
			{
				ft_ra(stk);
				moved++;
			}
		}
	}
	return (moved);
}

/**
 * 
 * brief: depending of if the new wanted top is above or under median
 * either rotates or reverse rotates to put the new top there
 * 
 */
static int	solo_rotate_b(t_node **stk, t_node *new_top)
{
	int	moved;

	moved = 0;
	if (*stk && *stk != new_top)
	{
		if (VERBOSE)
			ft_printf("\n\t  (%s):\n", __func__);
		if (ft_is_above_median(*stk, new_top->ind))
		{
			while (*stk && *stk != new_top)
			{
				ft_rb(stk);
				moved++;
			}
		}
		else
		{
			while (*stk && *stk != new_top)
			{
				ft_rvb(stk);
				moved++;
			}
		}
	}
	return (moved);
}

/**
 * 
 * brief: rotates stk_a and stk_b in the same sens 
 * (either <= if both abose med or => if both under) 
 * until either cheapest or target or both are on top of their stk
 * 
 *	if I don't pass then complexity test : FIX ME TO INCLUDE MEDIAN OVERLAP
 */
int	ft_counter_rotator(t_node **stk_a, t_node **stk_b,	\
t_node *cheapest, t_node *target)
{
	int	moved;

	moved = 1;
	if (VERBOSE)
		ft_printf("\n\t  (%s):\n", __func__);
	if (ft_is_above_median(*stk_a, cheapest->ind) \
		&& ft_is_above_median(*stk_b, target->ind))
	{
		while (*stk_b != target && *stk_a != cheapest && moved++)
			ft_rr(stk_a, stk_b);
		if (VERBOSE && moved > 1)
			ft_print_both_stacks(*stk_a, *stk_b);
	}
	else if (!ft_is_above_median(*stk_a, cheapest->ind) \
			&& !ft_is_above_median(*stk_b, target->ind))
	{
		while (*stk_b != target && *stk_a != cheapest && moved++)
			ft_rvrv(stk_a, stk_b);
		if (VERBOSE && moved > 1)
			ft_print_both_stacks(*stk_a, *stk_b);
	}
	moved = 0;
	moved += solo_rotate_a(stk_a, cheapest);
	moved += solo_rotate_b(stk_b, target);
	return (moved);
}
