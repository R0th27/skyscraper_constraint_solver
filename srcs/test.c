/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htoe <htoe@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 20:18:54 by htoe              #+#    #+#             */
/*   Updated: 2026/01/24 20:26:56 by htoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sky_scrapper.h"

void	print_clues(t_clues *clues)
{
	int	i;

	printf("SIZE: [%d]\n", clues -> size);
	printf("TOP: ");
	i = -1;
	while (++i < clues -> size)
		printf("[%d] ", clues -> top[i]);
	printf("\nBOTTOM: ");
	i = -1;
	while (++i < clues -> size)
		printf("[%d] ", clues -> bottom[i]);
	printf("\nLEFT: ");
	i = -1;
	while (++i < clues -> size)
		printf("[%d] ", clues -> left[i]);
	printf("\nRIGHT: ");
	i = -1;
	while (++i < clues -> size)
		printf("[%d] ", clues -> right[i]);
	printf("\n");
}
