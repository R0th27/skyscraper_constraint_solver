/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sky_scrapper.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htoe <htoe@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:30:42 by htoe              #+#    #+#             */
/*   Updated: 2026/01/23 11:12:49 by htoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKY_SCRAPPER_H
# define SKY_SCRAPPER_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef enum e_error
{
	ERR_OK,
	ERR_BAD_FORMAT,
	ERR_INVALID_VALUE,
	ERR_DUPLICATE,
	ERR_MALLOC
}	t_error;

//utilities
void	ft_putstr(char const *str);
void	ft_putchar(char c);
int		print_error(t_error err);

#endif