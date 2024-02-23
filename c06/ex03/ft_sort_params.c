/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <pcm9909@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 01:28:20 by chunpark          #+#    #+#             */
/*   Updated: 2023/12/20 14:09:46 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int ac, char *av[])
{
	int	i;
	int	j;
	int	k;

	i = 1;
	while (i < ac - 1)
	{
		j = i + 1;
		while (j <= ac - 1)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
				swap(&av[i], &av[j]);
			j++;
		}
		i++;
	}
	k = 1;
	while (k < ac)
	{
		ft_putstr(av[k]);
		ft_putstr("\n");
		k++;
	}
}
