/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sky_scrapper.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htoe <htoe@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:30:42 by htoe              #+#    #+#             */
/*   Updated: 2026/01/24 20:51:09 by htoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKY_SCRAPPER_H
# define SKY_SCRAPPER_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

enum
{
	MAX_SIZE = 9,
	MAX_CLUES = 36
};

typedef enum e_error
{
	ERR_OK,
	ERR_INVALID_USAGE,
	ERR_INVALID_FORMAT,
	ERR_INVALID_VALUE,
	ERR_MALLOC
}	t_error;

typedef struct s_clues
{
	int	size;
	int	vals[MAX_CLUES];
	int	*top;
	int	*bottom;
	int	*left;
	int	*right;
}	t_clues;

//utilities
void	ft_putstr(char const *str);
void	ft_putchar(char c);
int		print_error(t_error err);

//input_handling
t_error	check_clues(char *str);
t_error	parse_input(char *str, t_clues **clues);

//testing
void	print_clues(t_clues *clues);

#endif