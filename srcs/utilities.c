/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htoe <htoe@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:34:11 by htoe              #+#    #+#             */
/*   Updated: 2026/01/24 18:21:28 by htoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sky_scrapper.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char const *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	write(1, str, len);
}

int	print_error(t_error err)
{
	if (err == ERR_INVALID_USAGE)
		write(STDERR_FILENO, "Usage: ./ss_solver 'clues'\n", 27);
	else if (err == ERR_INVALID_VALUE)
		write(STDERR_FILENO, "Error: invalid clues value\n", 27);
	else if (err == ERR_INVALID_FORMAT)
		write(STDERR_FILENO, "Error: invalid clues format\n", 28);
	else if (err == ERR_MALLOC)
		write(STDERR_FILENO, "Error: malloc failed\n", 21);
	else
		write(STDERR_FILENO, "Error\n", 6);
	return (1);
}
