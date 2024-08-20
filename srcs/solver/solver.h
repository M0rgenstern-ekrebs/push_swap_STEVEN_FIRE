/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:42:50 by mlapique          #+#    #+#             */
/*   Updated: 2024/08/20 07:42:19 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVER_H
# define SOLVER_H
# include "../stack/stack.h"

typedef struct s_utils
{
	int	max;
	int	theplus;
	int	nbsend;
	int	way_to_rotate;
	int	nbinstack;
}				t_utils;

// the utils
void	ft_sort(t_node *stk_a, t_node *stk_b);
void	ft_sort_three(t_node *stk);

#endif