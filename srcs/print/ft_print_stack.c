/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:11:41 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/21 12:05:40 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_print_stack(t_node *stk, char *name)
{
	t_node	*tmp;
	int		i;

	//ft_printf("\n\t(%s):\n\n", __func__);
	tmp = stk;
	ft_printf("\t    ───────── %s ──────────\n", name);
	ft_printf("\t   │   i   │   value      │\n");
	ft_printf("\t   │───────│──────────────│\n");
	if(!tmp)
		ft_printf("\t       i s   n  u  l  l\n");
	i = 0;
	while (tmp)
	{
		ft_printf("\t   │   %d\t%d\n", i, tmp->value);
		i++;
		tmp = tmp->next;
	}
	ft_printf("\t  len %d\n", ft_stack_length(stk));
}
