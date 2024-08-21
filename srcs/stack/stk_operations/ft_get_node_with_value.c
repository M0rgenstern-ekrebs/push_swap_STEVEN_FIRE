/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_node_with_value.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 00:00:11 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/22 00:01:35 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

/**
 * 
 * returns address of the i th node;
 * returns first if failure
 * 
 */
t_node	*ft_get_node_with_value(t_node *stk, int value)
{
	t_node	*tmp;

	tmp = stk;
	while (tmp)
	{
		if (tmp->value == value)
			return (tmp);
		tmp = tmp->next;
	}
	if (VERBOSE)
		ft_printf(" (%s) : I did an oopsie", __func__);
	return (stk);
}
