/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_available.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <pcm9909@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:18:31 by chunpark          #+#    #+#             */
/*   Updated: 2023/12/10 20:23:38 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	map_available(int row, int col, int map[][6])
{
	int	i;

	i = 1;
	while (row - i > 0)
	{
		if (map[row - i][col] == map[row][col])
			return (0);
		i++;
	}
	i = 1;
	while (col - i > 0)
	{
		if (map[row][col - i] == map[row][col])
			return (0);
		i++;
	}
	return (1);
}
