/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscrapper_types.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htoe <htoe@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 08:06:53 by htoe              #+#    #+#             */
/*   Updated: 2026/03/19 18:22:06 by htoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKYSCRAPPER_TYPES_H
# define SKYSCRAPPER_TYPES_H

# include <stdint.h>

# define MIN_N 4
# define MAX_N 9
# define MAX_PERM 362800
# define SIDE 4

typedef enum e_error
{
	ERR_OK = 0,
    ERR_ARGS,
    ERR_PARSE,
    ERR_MEMORY,
    ERR_PERM,
    ERR_DOMAIN,
    ERR_NOSOLUTION
}	t_error;

typedef enum e_side
{
	TOP,
	BOTTOM,
	LEFT,
	RIGHT
}	t_side;

typedef struct s_clues
{
	uint8_t clue[SIDE][MAX_N];
}	t_clues;

typedef struct s_puzzle
{
	uint8_t		size;
	uint8_t		(*clues)[MAX_N];
}	t_puzzle;

#endif
