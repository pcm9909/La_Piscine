/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <pcm9909@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:52:46 by chunpark          #+#    #+#             */
/*   Updated: 2023/12/06 20:50:39 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_comb(int i, int b)
{
	char	x;

	x = i / 10 + '0';
	write(1, &x, 1);
	x = i % 10 + '0';
	write(1, &x, 1);
	write(1, " ", 1);
	x = b / 10 + '0';
	write(1, &x, 1);
	x = b % 10 + '0';
	write(1, &x, 1);
	write(1, ",", 1);
	write(1, " ", 1);
}

void	check_last(int i, int b)
{
	char	x;

	x = i / 10 + '0';
	write(1, &x, 1);
	x = i % 10 + '0';
	write(1, &x, 1);
	write(1, " ", 1);
	x = b / 10 + '0';
	write(1, &x, 1);
	x = b % 10 + '0';
	write(1, &x, 1);
}

void	ft_print_comb2(void)
{
	int	cnt1;
	int	cnt2;

	cnt1 = 1;
	cnt2 = 0;
	while (cnt2 <= 98)
	{
		while (cnt1 <= 99)
		{
			if (cnt2 != 98)
			{
				write_comb(cnt2, cnt1);
			}
			else
			{
				check_last(cnt2, cnt1);
			}
			cnt1++;
		}
		cnt2++;
		cnt1 = cnt2 + 1;
	}
}
