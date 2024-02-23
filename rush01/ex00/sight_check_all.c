/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sight_check_all.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyeom <hyeyeom@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:17:37 by hyeyeom           #+#    #+#             */
/*   Updated: 2023/12/10 20:44:01 by hyeyeom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_split(char *argv);
int		col_up(char split_sight, int i, int map[][6]);
int		col_down(char split_sight, int i, int map[][6]);
int		row_left(char split_sight, int i, int map[][6]);
int		row_right(char split_sight, int i, int map[][6]);

int	sight_col_row(int *i, char *sight, int map[][6])
{
	while (*i <= 3)
	{
		if (!col_up(sight[*i], *i, map))
			return (0);
		(*i)++;
	}
	while (*i <= 7)
	{
		if (!col_down(sight[*i], *i, map))
			return (0);
		(*i)++;
	}
	while (*i <= 11)
	{
		if (!row_left(sight[*i], *i, map))
			return (0);
		(*i)++;
	}
	while (*i <= 15)
	{
		if (!row_right(sight[*i], *i, map))
			return (0);
		(*i)++;
	}
	return (1);
}

int	sight_check_all(char *argv, int map[][6])
{
	int		i;
	char	*sight;

	i = 0;
	sight = ft_split(argv);
	if (!sight_col_row(&i, sight, map))
		return (0);
	free(sight);
	return (1);
}
