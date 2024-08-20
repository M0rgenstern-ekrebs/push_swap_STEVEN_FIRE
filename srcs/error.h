/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:34:13 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/20 06:25:59 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_H
# define ERROR_H
# include <stdbool.h>
# include "limits.h"

typedef enum e_exit_status
{
	OK = 1,
	SUCCESS = 0,
	ERR = -1,
} t_exit_status;

typedef int t_error_code;

//sadly : only return ERR,
t_error_code	ft_error(t_error_code Error_code);
#endif