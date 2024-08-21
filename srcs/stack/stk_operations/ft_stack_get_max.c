/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_get_max.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 00:11:53 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/22 00:34:15 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

t_node	*ft_stack_get_max(t_node *stk)
{
	t_node	*tmp;
    t_node  *max;
    int     i;

	tmp = stk;
	max = tmp;
    i = 0;
	while (tmp)
	{
		if (tmp->value > max->value)
        {
            max = tmp;
            max->ind = i;
        }
        i++;
		tmp = tmp->next;
	}
	return (max);
}