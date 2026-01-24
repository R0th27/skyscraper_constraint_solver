/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htoe <htoe@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 19:51:36 by htoe              #+#    #+#             */
/*   Updated: 2026/01/24 20:49:29 by htoe             ###   ########.fr       */
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
	if ((len + 1) / 2 != 4 * btype || btype < 4 || btype > MAX_SIZE)
		return (ERR_INVALID_FORMAT);
	len = -1;
	while (str[++len])
	{
		if (str[len] != ' ' && (str[len] - '0') > btype)
			return (ERR_INVALID_VALUE);
	}
	return (ERR_OK);
}

t_error	parse_input(char *str, t_clues **clues)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
		i++;
	*clues = (t_clues *)malloc(sizeof(t_clues));
	if (!*clues)
		return (ERR_MALLOC);
	(*clues)-> size = (i + 1) / 8;
	i = -1;
	j = 0;
	while (str[++i])
	{
		if (i % 2 == 0)
			(*clues)-> vals[j++] = str[i] - '0';
	}
	(*clues)-> top = (*clues)-> vals;
	(*clues)-> bottom = (*clues)-> vals + (*clues)-> size;
	(*clues)-> left = (*clues)-> vals + (2 * (*clues)-> size);
	(*clues)-> right = (*clues)-> vals + (3 * (*clues)-> size);
	return (ERR_OK);
}
