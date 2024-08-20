/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_stack_last.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:29:13 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/20 07:37:26 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

//returns last from stk
t_node	*ft_get_stack_last(t_node *stk)
{
	while (stk && stk->next != NULL)
		stk = stk->next;
	return (stk);
}
