/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack_datas.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:12:58 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/21 12:06:59 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_print_how_many_tabs(int displayed_number)
{
	if (displayed_number > 9999999 || displayed_number < -999999)
		ft_printf("\t");
	else
		ft_printf("\t\t");
}

void	ft_print_stack_datas(t_node *stk, char *name)
{
	t_node	*tmp;
	int		i;

	//ft_printf("\n\t(%s):\n\n", __func__);
	tmp = stk;
	ft_printf("\t    ───────── %s ──────────\n", name);
	ft_printf("\t   │   i   │   value      │    i_target  │  push_cost  │");
	ft_printf("    >= median?  │\n");
	ft_printf("\t   │───────│──────────────│──────────────│─────────────│");
	ft_printf("────────────────│\n");
	if(!tmp)
		ft_printf("\t       i s   n  u  l  l\n");
	i = 0;
	while (tmp)
	{
		ft_printf("\t   │   %d\t%d", i, tmp->value);
		ft_print_how_many_tabs(tmp->value);
		ft_printf("%d\t\t%d", tmp->ind_target, tmp->push_cost);
		ft_printf("\t\t%d\n", ft_is_above_median(stk, i));
		i++;
		tmp = tmp->next;
	}
	ft_printf("\t  len %s : %d\n", name, ft_stack_length(stk));
	ft_printf("\t  med %s : %d\n", name, ft_stack_median(stk));
}
