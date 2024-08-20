/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_length.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:41:13 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/20 13:12:50 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

int	ft_stack_length(t_node *stk)
{
	t_node	*tmp;
	int		len;

	len = 0;
	tmp = stk;
	while (tmp)
	{
		len++;
		tmp = tmp->next;
	}
	return (len);
}
