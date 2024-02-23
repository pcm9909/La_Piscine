/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyeom <hyeyeom@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:18:51 by hyeyeom           #+#    #+#             */
/*   Updated: 2023/12/10 21:08:04 by hyeyeom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	msg_error(void);
int		check_input_pattern(char *argv);
void	dfs(int d, char *argv, int map[][6], int *count);

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	map[6][6];
	int	count;

	i = 0;
	count = 0;
	if (argc == 2 && check_input_pattern(argv[1]))
	{
		while (i < 6)
		{
			j = 0;
			while (j < 6)
				map[i][j++] = 0;
			i++;
		}
		dfs(0, argv[1], map, &count);
		if (count == 0)
			msg_error();
	}
	else
		msg_error();
	return (0);
}
