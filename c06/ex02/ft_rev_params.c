/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <pcm9909@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 20:58:04 by chunpark          #+#    #+#             */
/*   Updated: 2023/12/20 14:06:03 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (argc - i > 0)
	{
		j = 0;
		while (argv[argc - i][j] != '\0')
		{
			write (1, &argv[argc - i][j], 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}