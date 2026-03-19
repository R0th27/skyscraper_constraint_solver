/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htoe <htoe@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 18:20:44 by htoe              #+#    #+#             */
/*   Updated: 2026/03/19 18:20:53 by htoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscrapper.h"

t_error	validate_argument(uint8_t *size, int ac, char **av)
{
	int	len;
	int	digit;
	int	space;

	if (ac != 2 || !av[1][0])
		return (ERR_ARGS);
	len = -1;
	digit = 0;
	space = 0;
	while (av[1][++len])
	{
		if (av[1][len] >= '1' && av[1][len] <= '9')
			digit++;
		else if (av[1][len] == ' ')
			space++;
		else
			return (ERR_PARSE);
	}
	if ((len - space != digit) || (digit % SIDE)
		|| digit < SIDE * MIN_N || digit > SIDE * MAX_N)
		return (ERR_PARSE);
	*size = digit / SIDE;
	return (ERR_OK);
}
