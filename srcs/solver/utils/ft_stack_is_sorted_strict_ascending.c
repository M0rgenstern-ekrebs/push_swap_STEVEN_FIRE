/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_is_sorted_strict_ascending.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:41:16 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/21 16:36:16 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/**
 * brief : if (here > next) : fuck you
 * 
 */
bool	ft_stack_is_sorted_strict_ascending(t_node *stk)
{
	t_node	*tmp;

	tmp = stk;
	while (tmp && tmp->next)
	{
		if (tmp->value > tmp->next->value)
			return (false);
		tmp = tmp->next;
	}
	if (VERBOSE)
		ft_printf("\t  => is sorted (SUCCESS)\n");
	return (true);
}
