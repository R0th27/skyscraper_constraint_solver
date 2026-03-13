/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htoe <htoe@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 17:43:14 by htoe              #+#    #+#             */
/*   Updated: 2026/03/13 17:51:43 by htoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscrapper.h"

void	print_error(t_error err)
{
	if (err == ERR_ARGS)
		ft_putstr_fd("USAGE: ./ss_solver \"clues\"\n", STDERR_FILENO);
}
