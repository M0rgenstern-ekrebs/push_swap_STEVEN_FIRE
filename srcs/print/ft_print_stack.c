/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:11:41 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/22 13:53:40 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_print_stack(t_node *stk, char *name)
{
	t_node	*tmp;
	char	*spaces;
	int		i;

	if (name[0] == 'B')
		spaces = "\t\t\t\t\t\t      ";
	else
		spaces = "\t";
	tmp = stk;
	ft_printf("%s    ───────── %s ──────────\n", spaces, name);
	ft_printf("%s   │   i   │   value      │\n", spaces);
	ft_printf("%s   │───────│──────────────│\n", spaces);
	if (!tmp)
		ft_printf("%s       i s   n  u  l  l\n", spaces);
	i = 0;
	while (tmp)
	{
		ft_printf("%s   │   %d\t%d\n", spaces, i, tmp->value);
		i++;
		tmp = tmp->next;
	}
	ft_printf("%s  len %d\n", spaces, ft_stack_len(stk));
}
