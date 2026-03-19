/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscrapper.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htoe <htoe@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:30:42 by htoe              #+#    #+#             */
/*   Updated: 2026/03/19 19:24:05 by htoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKYSCRAPPER_H
# define SKYSCRAPPER_H

# include "skyscrapper_types.h"
# include "libft.h"
# include <stdio.h>

//Parse
t_error	parse_clues(t_puzzle *p, int ac, char **av);

//Error
void	print_error(t_error err);

//test print
void	print_puzzle(t_puzzle p);

#endif