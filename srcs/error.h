/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:34:13 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/20 18:35:39 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_H
# define ERROR_H
# include <stdbool.h>
# include "limits.h"

# ifndef VERBOSE
#  define VERBOSE 66
# endif

typedef enum e_exit_status
{
	OK = 1,
	SUCCESS = 0,
	ERR = -1,
}	t_exit_status;

typedef enum e_error_code
{
	ERROR = -1,
	ERR_PARSING = -42,
	ERR_INI_STK_A,
	ERR_SOLVER,
}	t_error_code;

//sadly : only return ERR,
t_exit_status	ft_error(t_error_code Error_code);
#endif