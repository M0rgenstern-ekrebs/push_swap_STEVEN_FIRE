/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stacks_bodies.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:34:45 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/22 02:36:03 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_print_how_many_tabs(int nb_printed_chars)
{
	if (nb_printed_chars >= 20)
		ft_printf("\t\t");
	else
		ft_printf("\t\t\t");
}

static int	ft_print_body_a(t_node *a, t_node *b, int i, t_pbi *infos)
{
	infos->nb_printed += ft_printf("\t   │   %d\t%d", i, a->value);
	if (!b)
	{
		if (infos->absence_b == 1)
		{
			ft_print_how_many_tabs(infos->nb_printed);
			ft_printf("\t     B  is  n u l l");
		}
		if (infos->absence_b >= 0)
			infos->absence_b++;
	}
	else
		infos->absence_b = -1;
	return (infos->nb_printed);
}

static void	ft_print_body_b(t_node *a, t_node *b, int i, t_pbi *infos)
{
	if (!a)
	{
		if (infos->absence_a == 1)
		{
			ft_printf("\t        A  is  n u l l");
		}
		else
			ft_printf("\t\t\t");
		if (infos->absence_a >= 0)
			infos->absence_a++;
	}
	else
		infos->absence_a = -1;
	ft_print_how_many_tabs(infos->nb_printed);
	ft_printf("\t│   %d\t    %d", i, b->value);
}

void	ft_print_stacks_bodies(t_node *a, t_node *b)
{
	int		i;
	t_pbi	infos;

	i = 0;
	infos.nb_printed = 0;
	infos.absence_a = 0;
	infos.absence_b = 0;
	infos.first_time = true;
	while (a || b)
	{
		if (a)
		{
			ft_print_body_a(a, b, i, &infos);
		}
		if (b)
		{
			ft_print_body_b(a, b, i, &infos);
			b = b->next;
		}
		if (a)
			a = a->next;
		ft_printf("\n");
		i++;
		infos.nb_printed = 0;
	}
}
