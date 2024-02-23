/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <pcm9909@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 06:16:06 by chunpark          #+#    #+#             */
/*   Updated: 2023/12/21 17:07:24 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	nbr;
	int	i;

	i = 0;
	nbr = max - min;
	*range = (int *)malloc(sizeof(int) * nbr + 1);
	if (min == max || min > max)
	{	
		*range = NULL;
		return (0);
	}
	if (range != NULL)
	{
		while (min < max)
		{
			(*range)[i] = min;
			min++;
			i++;
		}
		return (nbr);
	}
	else
		return (0);
}
