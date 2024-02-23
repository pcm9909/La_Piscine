/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <pcm9909@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:43:04 by chunpark          #+#    #+#             */
/*   Updated: 2023/12/05 23:41:15 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	divider;
	int	x;

	divider = 1;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	while (nb / divider > 9)
		divider *= 10;
	while (divider > 0)
	{
		x = nb / divider + '0';
		write(1, &x, 1);
		nb %= divider;
		divider /= 10;
	}
}
