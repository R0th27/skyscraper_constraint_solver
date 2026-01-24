/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htoe <htoe@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:30:26 by htoe              #+#    #+#             */
/*   Updated: 2026/01/24 20:50:25 by htoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sky_scrapper.h"

int	main(int ac, char **av)
{
	t_error	err;
	t_clues	*clues;

	err = ERR_OK;
	clues = NULL;
	if (ac != 2)
		err = ERR_INVALID_USAGE;
	if (err == ERR_OK)
		err = check_clues(av[1]);
	if (err == ERR_OK)
		err = parse_input(av[1], &clues);
	if (err != ERR_OK)
		print_error(err);
	print_clues(clues);
	return (err != ERR_OK);
}
