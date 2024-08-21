/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:35:03 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/22 00:44:57 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

# include "../push_swap.h"

typedef struct s_print_both_infos
{
	int		absence_a;
	int		absence_b;
	bool	first_time;
	int		nb_printed;
} t_print_both_infos,	t_pbi;

//print functions

void	ft_print_stack(t_node *stk, char *stk_name);
void	ft_print_both_stacks(t_node *stk_a, t_node *stk_b);
void	ft_print_stack_datas(t_node *stk, char *name);

//util

void	ft_print_stacks_bodies(t_node *a, t_node *b);

#endif