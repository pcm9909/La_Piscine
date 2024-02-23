/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check_sights.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyeom <hyeyeom@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:42:35 by hyeyeom           #+#    #+#             */
/*   Updated: 2023/12/10 20:44:47 by hyeyeom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	col_up(char split_sight, int i, int map[][6])
{
	int	count;
	int	max;
	int	index;

	count = 0;
	max = 0;
	index = 1;
	while (index <= 4)
	{
		if (map[index][i + 1] > max)
		{
			max = map[index][i + 1];
			count++;
		}
		index++;
	}
	if (count == (split_sight - '0'))
		return (1);
	return (0);
}

int	col_down(char split_sight, int i, int map[][6])
{
	int	count;
	int	max;
	int	index;

	count = 0;
	max = 0;
	index = 4;
	i -= 3;
	while (index >= 1)
	{
		if (map[index][i] > max)
		{
			max = map[index][i];
			count++;
		}
		index--;
	}
	if (count == (split_sight - '0'))
		return (1);
	return (0);
}

int	row_left(char split_sight, int i, int map[][6])
{
	int	count;
	int	max;
	int	index;

	count = 0;
	max = 0;
	index = 1;
	i -= 7;
	while (index <= 4)
	{
		if (map[i][index] > max)
		{
			max = map[i][index];
			count++;
		}
		index++;
	}
	if (count == split_sight - '0')
		return (1);
	return (0);
}

int	row_right(char split_sight, int i, int map[][6])
{
	int	count;
	int	max;
	int	index;

	count = 0;
	max = 0;
	index = 4;
	i -= 11;
	while (index >= 1)
	{
		if (map[i][index] > max)
		{
			max = map[i][index];
			count++;
		}
		index--;
	}
	if (count == split_sight - '0')
		return (1);
	return (0);
}
