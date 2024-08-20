/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_length.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:41:13 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/20 09:58:56 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

int	ft_stack_length(t_node *stk)
{
	t_node	*last;
	int		len;

	last = ft_get_stack_last(stk);
	len = last->index + 1;
	return (len);
}
