/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <pcm9909@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:17:23 by chunpark          #+#    #+#             */
/*   Updated: 2023/12/06 20:38:26 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check(char a, char b, char c)
{
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		write(1, ",", 1);
		write(1, " ", 1);
	}
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				check(a, b, c);
				c++;
			}
			c = ++b + 1;
		}
		b = a++ + 1;
	}
}
