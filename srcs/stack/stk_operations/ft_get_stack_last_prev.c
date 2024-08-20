/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_stack_last_prev.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:29:04 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/20 07:37:24 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

//returns last->prev
t_node	*ft_get_stack_last_prev(t_node *stk)
{
	while (stk && stk->next && stk->next->next != NULL)
		stk = stk->next;
	return (stk);
}
