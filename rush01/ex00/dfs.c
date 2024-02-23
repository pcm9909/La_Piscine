/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dfs.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyeom <hyeyeom@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:28:07 by gwkwon            #+#    #+#             */
/*   Updated: 2023/12/10 20:44:57 by hyeyeom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	map_print_all(int map[][6]);
int		sight_check_all(char *argv, int map[][6]);
int		map_available(int row, int col, int map[][6]);

void	dfs(int d, char *argv, int map[][6], int *count)
{
	int	row;
	int	col;
	int	num;

	row = d / 4 + 1;
	col = d % 4 + 1;
	num = 1;
	if (d == 16)
	{
		if (sight_check_all(argv, map))
		{
			(*count)++;
			map_print_all(map);
		}
	}
	while (num <= 4)
	{
		map[row][col] = num;
		if (map_available(row, col, map))
			dfs(d + 1, argv, map, count);
		map[row][col] = 0;
		num++;
	}
}
