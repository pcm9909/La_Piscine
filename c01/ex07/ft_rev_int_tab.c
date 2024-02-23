/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <pcm9909@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:37:06 by chunpark          #+#    #+#             */
/*   Updated: 2023/12/05 21:39:46 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	tmp;

	x = 0;
	while (x < size / 2)
	{
		tmp = tab[size - x - 1];
		tab[size - x - 1] = tab[x];
		tab[x] = tmp;
		x++;
	}
}
