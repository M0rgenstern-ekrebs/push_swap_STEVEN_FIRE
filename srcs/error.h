/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:34:13 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/19 20:01:23 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_H
# define ERROR_H
# include <stdbool.h>

typedef enum e_exit_status
{
	OK = 1,
	SUCCESS = 0,
	ERR = -1,
} t_exit_status;

typedef int t_error_code;

//sadly : only return ERR,
t_error_code	ft_error(int Error_code);
#endif