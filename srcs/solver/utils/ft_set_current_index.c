/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_current_index.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:02:41 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/22 16:25:13 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/**
 * 
 * sets its current index to each node in stk
 * 
 */
void	ft_set_current_index(t_node *stk)
{
	int	i;
	int	median;

	i = 0;
	if (!stk)
		return ;
	median = ft_stack_len(stk) / 2;
	while (stk)
	{
		stk->ind = i;
		if (i <= median)
			stk->above_median = true;
		else
			stk->above_median = false;
		stk = stk->next;
		++i;
	}
}
