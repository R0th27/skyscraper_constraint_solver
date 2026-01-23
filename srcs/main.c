/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htoe <htoe@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:30:26 by htoe              #+#    #+#             */
/*   Updated: 2026/01/23 11:15:25 by htoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sky_scrapper.h"

int	print_error(t_error err)
{
	if (err == ERR_BAD_FORMAT)
		write(2, "Error: bad format\n", 18);
	else if (err == ERR_INVALID_VALUE)
		write(2, "Error: invalid value\n", 21);
	else if (err == ERR_DUPLICATE)
		write(2, "Error: duplicate value\n", 24);
	else if (err == ERR_MALLOC)
		write(2, "Error: malloc failed\n", 22);
	return (1);
}

int	main(int ac, char **av)
{
	(void)av;
	if (ac != 2)
		return (print_error(ERR_BAD_FORMAT));
	return (ft_putstr("Completed\n"), 0);
}
