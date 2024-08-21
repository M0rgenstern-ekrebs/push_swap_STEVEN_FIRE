/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_get_min.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 00:08:56 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/22 00:16:47 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

t_node	*ft_stack_get_min(t_node *stk)
{
	t_node	*tmp;
    t_node  *min;
    int     i;

	tmp = stk;
	min = tmp;
    i = 0;
	while (tmp)
	{
		if (tmp->value < min->value)
        {
            min = tmp;
            min->ind = i;
        }
        i++;
		tmp = tmp->next;
	}
	return (min);
}