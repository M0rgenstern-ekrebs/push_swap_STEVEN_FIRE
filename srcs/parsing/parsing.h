/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:26:15 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/19 20:37:19 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

# include "../error.h"
# include "../stack/stack.h"

//verification suposed_place
t_exit_status	ft_ini_stk_from_argv(t_node *stk_a, char *argv[], int argc);

#endif