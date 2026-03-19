/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscrapper.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htoe <htoe@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:30:42 by htoe              #+#    #+#             */
/*   Updated: 2026/03/19 18:22:12 by htoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKYSCRAPPER_H
# define SKYSCRAPPER_H

# include "skyscrapper_types.h"
# include "libft.h"
# include <stdio.h>

//Parse
t_error	validate_argument(uint8_t *size, int ac, char **av);

//Error
void	print_error(t_error err);

#endif