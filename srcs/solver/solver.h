/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:42:50 by mlapique          #+#    #+#             */
/*   Updated: 2024/08/19 20:23:05 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVER_H
# define SOLVER_H
# include "../stack/stack.h"
# include "limits.h"
# include "libft/libft.h"

typedef struct s_utils
{
	int	max;
	int	theplus;
	int	nbsend;
	int	way_to_rotate;
	int	nbinstack;
}				t_utils;

// the utils
int		get_ndmax(t_node **stack);
t_node	*get_stack_bottom(t_node *stack);
t_node	*get_stack_before_bottom(t_node *stack);
t_node	*ft_lstlas(t_node *lst);
int		is_sorted(t_node *stack_a, t_node *stackb);




#endif