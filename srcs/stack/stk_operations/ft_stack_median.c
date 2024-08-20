/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_median.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 15:53:21 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/20 09:57:40 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

/* returns the mathematical value of the median of the stack
 * example :
 * median(4) = 2.5	:	[_]   [_] | [_]   [_]
 * median(5) = 3	:	[_]   [_]   [|]   [_]   [_]
 */
int ft_stack_median(t_node *stk)
{
	int ind_max;

	ind_max = ft_stack_length(stk);
	return ((ind_max / 2) + (ind_max % 2));
}

