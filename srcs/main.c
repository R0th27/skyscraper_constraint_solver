/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htoe <htoe@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 08:25:09 by htoe              #+#    #+#             */
/*   Updated: 2026/03/10 09:03:41 by htoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscrapper.h"
#include "skyscrapper_types.h"

int	main(int ac, char **av)
{
	t_error	err;

	err = run_program(ac, av);
	if (err)
		print_error(err);
	return (err);
}
