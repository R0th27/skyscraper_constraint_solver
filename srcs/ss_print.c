/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htoe <htoe@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 18:50:27 by htoe              #+#    #+#             */
/*   Updated: 2026/03/19 19:17:55 by htoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscrapper.h"

static void	print_clues(t_puzzle p, int size)
{
	int	side;
	int	n;

	side = 0;
	while (side < SIDE)
	{
		n = -1;
		while (++n < size)
			printf("[%d]", p.clue[side][n]);
		printf("\n");
		side++;
	}
}

void	print_puzzle(t_puzzle p)
{
	printf("### CLUES ###\n");
	print_clues(p, p.size);
}
