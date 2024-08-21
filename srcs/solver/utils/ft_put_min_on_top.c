/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_min_on_top.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 00:24:11 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/22 00:25:57 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_put_min_on_top(t_node **stk)
{
	t_node	*min;

	if (VERBOSE)
		ft_printf("\n\t  (%s):\n", __func__);
	min = ft_stack_get_min(*stk);
	if (ft_is_above_median(*stk, min->ind))
	{
		while (*stk != min)
		{
			ft_ra(stk);
		}
	}
	else
	{
		while (*stk != min)
		{
			ft_rva(stk);
		}
	}
}
