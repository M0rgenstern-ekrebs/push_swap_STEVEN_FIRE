/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack_datas.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:12:58 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/22 21:33:49 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_print_how_many_tabs(int displayed_number)
{
	if (displayed_number > 9999999 || displayed_number < -999999)
		ft_printf("\t");
	else
		ft_printf("\t\t");
}

static void	ft_print_datas(t_node *stk)
{
	t_node	*tmp;
	int		i;

	tmp = stk;
	if (!tmp)
		ft_printf("\t       i s   n  u  l  l\n");
	i = 0;
	while (tmp)
	{
		ft_printf("\t   │   %d\t%d", i, tmp->value);
		ft_print_how_many_tabs(tmp->value);
		if (tmp->target)
			ft_printf("%d\t\t", tmp->target->ind);
		else
			ft_printf("-1\t\t");
		ft_printf("%d", tmp->push_cost);
		ft_printf("\t\t%d\n", ft_is_above_median(stk, i));
		i++;
		tmp = tmp->next;
	}
}

void	ft_print_stack_datas(t_node *stk, char *name)
{
	ft_printf("\t    ───────── %s ──────────", name);
	ft_printf("──────────────────────────────────────────────\n");
	ft_printf("\t   │   i   │   value      │    i_target  │  push_cost  │");
	ft_printf("    >= median?  │\n");
	ft_printf("\t   │───────│──────────────│──────────────│─────────────│");
	ft_printf("────────────────│\n");
	ft_print_datas(stk);
	ft_printf("\t  len %s : %d\n", name, ft_stack_len(stk));
	ft_printf("\t  med %s : %d\n", name, ft_stack_median(stk));
}
