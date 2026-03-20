/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htoe <htoe@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 18:20:44 by htoe              #+#    #+#             */
/*   Updated: 2026/03/20 12:20:44 by htoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscrapper.h"

static t_error	validate_argument(uint8_t *size, int ac, char **av)
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
	if ((len - space != digit) || (digit % SIDE) || ((space + 1) % SIDE)
		|| digit < SIDE * MIN_N || digit > SIDE * MAX_N)
		return (ERR_PARSE);
	*size = digit / SIDE;
	return (ERR_OK);
}

static t_error	store_clues(t_puzzle *p, char *s)
{
	int	side;
	int	n;

	side = TOP;
	n = 0;
	while (*s)
	{
		if (n == p->size)
		{
			side++;
			n = 0;
		}
		if (*s >= '1' && *s <= p->size + '0')
			p->clue[side][n++] = (*s) - '0';
		else if (*s != ' ')
			return (ERR_PARSE);
		s++;
	}
	return (ERR_OK);
}

t_error	parse_clues(t_puzzle *p, int ac, char **av)
{
	t_error	err;

	err = validate_argument(&(p->size), ac, av);
	if (!err)
		err = store_clues(p, av[1]);
	return (err);
}
