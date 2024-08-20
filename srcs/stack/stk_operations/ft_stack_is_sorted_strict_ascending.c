/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_is_sorted_strict_ascending.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:41:16 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/20 11:27:28 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

/*
*/
bool	ft_stack_is_sorted_strict_ascending(t_node *stk)
{
	t_node	*tmp;

	tmp = stk;
	while (tmp && tmp->next)
	{
		if (tmp->value <= tmp->next->value)
			return (false);
		tmp = tmp->next;
	}
	return (true);
}
