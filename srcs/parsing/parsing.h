/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:26:15 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/23 14:14:26 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

# include "../error.h"
# include "../stack/stack.h"
# include "../print/print.h"

//functions

t_exit_status	ft_ini_stk_from_argv(t_node **stk_a, char *argv[], int argc);
t_exit_status	ft_check_parsing(char *argv[], int argc);

//utils

t_exit_status	ft_check_is_int(char *argv[]);
t_exit_status	ft_check_no_double(char *argv[]);
#endif