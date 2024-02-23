/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyeom <hyeyeom@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:15:16 by gwkwon            #+#    #+#             */
/*   Updated: 2023/12/10 20:44:19 by hyeyeom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	arr_init(char *sight)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		sight[i] = 0;
		i++;
	}
	sight[i] = '\0';
}

char	*ft_split(char *argv)
{
	int		i;
	int		j;
	char	*sight;

	i = 0;
	j = 0;
	sight = (char *)malloc(sizeof(char) * 17);
	arr_init(sight);
	while (argv[j] != '\0')
	{
		if (argv[j] >= '1' && argv[j] <= '4')
		{
			sight[i] = argv[j];
			i++;
			j++;
		}
		else
			j++;
	}
	return (sight);
}
