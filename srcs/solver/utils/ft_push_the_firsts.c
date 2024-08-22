/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_the_firsts.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 00:29:40 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/22 02:35:25 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/**
 * 
 * brief : pushes the X firsts of a in b
 * X >= 2, we try 2 times & we stop pushing if there is only 3 left in a
 */
void	ft_push_the_firsts(t_node **stk_a, t_node **stk_b, int *len_a)
{
	int	i;

	if (VERBOSE)
		ft_printf("\n(%s):\n", __func__);
	i = 0;
	while (i < 2)
	{
		if (*len_a <= 3)
		{
			if (VERBOSE)
				ft_print_both_stacks(*stk_a, *stk_b);
			return ;
		}
		ft_pb(stk_a, stk_b);
		(*len_a)--;
		i++;
	}
	if (VERBOSE)
		ft_print_both_stacks(*stk_a, *stk_b);
}
