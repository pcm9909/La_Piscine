/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <pcm9909@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 22:59:46 by chunpark          #+#    #+#             */
/*   Updated: 2023/12/03 23:00:01 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int x, char start, char middle, char end)
{
	int		i;

	i = 1;
	ft_putchar(start);
	while (i++ < x - 1)
		ft_putchar(middle);
	if (x > 1)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		i;

	i = 1;
	if (x == 0 || y == 0)
		return ;
	print_line(x, '/', '*', '\\');
	while (i++ < y - 1)
		print_line(x, '*', ' ', '*');
	if (y > 1)
		print_line(x, '\\', '*', '/');
}
