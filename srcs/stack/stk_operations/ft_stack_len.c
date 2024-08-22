/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:41:13 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/22 13:48:25 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

int	ft_stack_len(t_node *stk)
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
