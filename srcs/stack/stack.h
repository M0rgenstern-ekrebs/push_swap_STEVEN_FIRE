/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:27:05 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/20 11:19:48 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include <stdlib.h>
# include "../error.h"

typedef struct s_node
{
	int				value;
	int				index;
	int				push_cost;
	int				ind_target;
	struct s_node	*next;
}				t_node;

//subject operations
//	swap

void	ft_ss(t_node **stk_a, t_node **stk_b);
void	ft_sb(t_node **stk_b);
void	ft_sa(t_node **stk_a);
void	ft_swap(t_node **stk);

//	rotate

void	ft_rotate(t_node **stack);
void	ft_ra(t_node **stk_a);
void	ft_rb(t_node **stk_b);
void	ft_rr(t_node **stk_a, t_node **stk_b);

//	reverse_rotate

void	ft_rev_rotate(t_node **stack);
void	ft_rva(t_node **stk_a);
void	ft_rvb(t_node **stk_b);
void	ft_rvrv(t_node **stk_a, t_node **stk_b);

//	push

void	ft_push(t_node **src, t_node **dest);
void	ft_pa(t_node **stk_a, t_node **stk_b);
void	ft_pb(t_node **stk_a, t_node **stk_b);

//stk operations

void	ft_free_stack(t_node *stk);
void	ft_print_stack(t_node *stk, char *name);
void	ft_print_stack_datas(t_node *stk, char *name);
t_node	*ft_get_stack_last_prev(t_node *stk);
t_node	*ft_get_stack_last(t_node *stk);
int		ft_stack_ind_max(t_node *stk);
int		ft_stack_ind_min(t_node *stk);
bool	ft_stack_is_sorted_strict_ascending(t_node *stk);
int		ft_stack_length(t_node *stk);
int		ft_stack_median(t_node *stk);
int		ft_stack_costs_analysis(t_node *stk);
void	ft_stack_target_nodes(t_node *stk);

//lst operations

void	ft_lst_addback(t_node *lst, t_node *new);
t_node	*ft_lst_last(t_node *lst);
void	ft_lst_free(t_node *stk);
t_node	*ft_lst_new(int nb);

#endif