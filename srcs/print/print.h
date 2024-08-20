/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:35:03 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/20 20:21:48 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

# include "../push_swap.h"

//print functions

void	ft_print_stack(t_node *stk, char *stk_name);
void	ft_print_both_stacks(t_node *stk_a, t_node *stk_b);
void	ft_print_stack_datas(t_node *stk, char *name);

//util

void	ft_print_body(t_node *a, t_node *b);

#endif