/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonoh <eonoh@student.42gyeongsan.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 22:46:22 by eonoh             #+#    #+#             */
/*   Updated: 2023/12/03 23:21:03 by eonoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	ft_atoi(char *str)
{
	long long	n;

	n = 0;
	while (*str)
	{
		if (*str == '+')
			str++;
		while (*str >= '0' && *str <= '9' && n <= 2147483647)
			n = n * 10 + (*str++ - '0');
		if (*str != '\0' || n > 2147483647)
			return (-1);
	}
	return (n);
}

int	main(int argc, char **argv)
{
	int		x;
	int		y;

	if (argc != 3)
	{
		write(2, "Error", 5);
		return (0);
	}
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	if (x == -1 || y == -1 || x == 0 || y == 0)
	{
		write(2, "Error", 5);
		return (0);
	}
	rush(x, y);
}
