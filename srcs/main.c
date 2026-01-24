/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htoe <htoe@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:30:26 by htoe              #+#    #+#             */
/*   Updated: 2026/01/24 18:27:02 by htoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sky_scrapper.h"

t_error	check_clues(char *str)
{
	int	len;
	int	btype;

	len = -1;
	while (str[++len])
	{
		if (len % 2 == 0 && (str[len] < '1' || str[len] > '9'))
			return (ERR_INVALID_FORMAT);
		else if (len % 2 == 1 && str[len] != ' ')
			return (ERR_INVALID_FORMAT);
	}
	btype = (len + 1) / 8;
	if ((len + 1) / 2 != 4 * btype || btype < 4 || btype > 9)
		return (ERR_INVALID_FORMAT);
	len = -1;
	while (str[++len])
	{
		if (str[len] != ' ' && (str[len] - '0') > btype)
			return (ERR_INVALID_VALUE);
	}
	return (ERR_OK);
}

int	main(int ac, char **av)
{
	t_error	err;

	if (ac != 2)
		return (print_error(ERR_INVALID_USAGE));
	err = check_clues(av[1]);
	if (err != ERR_OK)
		return (print_error(err));
	return (ft_putstr("Completed\n"), 0);
}
