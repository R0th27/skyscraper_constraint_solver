/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htoe <htoe@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 08:25:09 by htoe              #+#    #+#             */
/*   Updated: 2026/03/20 11:58:30 by htoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscrapper.h"

int	main(int ac, char **av)
{
	t_error		err;
	t_puzzle	p;

	err = parse_clues(&p, ac, av);
	if (!err)
		print_puzzle(p);
	if (err)
		print_error(err);
	return (err);
}
