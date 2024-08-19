/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_stack_last.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:29:13 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/19 19:29:33 by ekrebs           ###   ########.fr       */
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