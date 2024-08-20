/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:26:15 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/20 05:56:27 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

# include "../error.h"
# include "../stack/stack.h"
# include "../libft/libft.h"

//functions

t_exit_status	ft_ini_stk_from_argv(t_node *stk_a, char *argv[], int argc);
t_exit_status	ft_check_parsing(char *argv[]);

//utils

t_exit_status	ft_check_is_int(char *argv[]);
t_exit_status	ft_check_no_double(char *argv[]);
#endif