/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_above_median.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 22:22:20 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/22 01:46:53 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/**
 * 
 * brief : tells if ind is in the first half
 * 
 */
bool	ft_is_above_median(t_node *stk, int ind)
{
	int	median;

	median = ft_stack_median(stk);
	if (ind <= median)
		return (true);
	return (false);
}
