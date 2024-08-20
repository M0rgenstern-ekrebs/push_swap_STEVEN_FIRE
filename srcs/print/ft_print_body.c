/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_body.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:34:45 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/20 20:03:14 by ekrebs           ###   ########.fr       */
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

static int	ft_print_body_a(t_node *a, t_node *b, int i, int printed)
{
	static int absence_b=0;

	printed += ft_printf("\t   │   %d\t%d", i, a->value);
	if (!b)
	{
		if (absence_b > 0)
			absence_b++;
		if (absence_b == 3)
		{
			ft_printf("\t\t\t\t     B  is  n u l l\n");
		}
		else
			ft_printf("\n");
	}
	else
		absence_b = -1;
	return (printed);
}

static void	ft_print_body_b(t_node *a, t_node *b, int i, int printed)
{
	ft_print_how_many_tabs(printed);
	if (!a)
		ft_printf("\t\t\t\t\t\t\t");
	ft_printf("\t│   %d\t    %d\n", i, b->value);
}

void	ft_print_body(t_node *a, t_node *b)
{
	int		i;
	int		printed;

	i = 0;
	printed = 0;
	while (a || b)
	{
		if (a)
		{
			printed += ft_print_body_a(a, b, i, printed);
			a = a->next;	
		}
		if (b)
		{
			ft_print_body_b(a, b, i, printed);
			b = b->next;
		}
		i++;
		printed = 0;
	}
}