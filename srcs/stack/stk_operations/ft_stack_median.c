/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_median.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 15:53:21 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/21 17:48:31 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

/** returns the median of the stack
 *
 */
int	ft_stack_median(t_node *stk)
{
	int	ind_max;

	ind_max = ft_stack_length(stk);
	return ((ind_max / 2));
}
