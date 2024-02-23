/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <pcm9909@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 05:54:42 by chunpark          #+#    #+#             */
/*   Updated: 2023/12/21 21:26:11 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*nbr_range;
	int	i;

	i = 0;
	range = max - min;
	if (min > max || min == max)
		return (0);
	nbr_range = (int *)malloc(sizeof(int) * range + 1);
	if (nbr_range == NULL)
		return (0);
	else
	{
		while (min < max)
		{
			nbr_range[i] = min;
			min++;
			i++;
		}
		nbr_range[i] = '\0';
		return (nbr_range);
	}
}
