/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <pcm9909@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 20:59:51 by chunpark          #+#    #+#             */
/*   Updated: 2023/12/18 20:04:13 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	while (1)
	{
		if (nb <= 2)
		{
			return (2);
		}
		i = nb / 2;
		while (i >= 2)
		{
			if (nb % i == 0)
				break ;
			i--;
		}
		if (i < 2)
		{
			return (nb);
		}
		nb++;
	}
}
