/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <pcm9909@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 04:55:06 by chunpark          #+#    #+#             */
/*   Updated: 2023/12/20 01:32:17 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nbr;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	i = 0;
	nbr = 1;
	while (i < power)
	{
		nbr = nbr * nb;
		i++;
	}
	return (nbr);
}
