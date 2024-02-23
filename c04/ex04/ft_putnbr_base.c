/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <pcm9909@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 23:25:50 by chunpark          #+#    #+#             */
/*   Updated: 2023/12/16 02:45:12 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base_len(base) == 1)
			return (0);
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j <= base_len(base))
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		bl;
	int		cb;
	long	nb;

	bl = base_len(base);
	cb = check_base(base);
	nb = nbr;
	if (cb == 1)
	{
		if (nb < 0)
		{
			nb *= -1;
			write (1, "-", 1);
		}
		if (nb < bl)
			write (1, &base[nb], 1);
		if (nb >= bl)
		{
			ft_putnbr_base(nb / bl, base);
			ft_putnbr_base(nb % bl, base);
		}
	}
}
