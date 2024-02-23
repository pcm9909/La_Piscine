/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <pcm9909@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 00:59:00 by chunpark          #+#    #+#             */
/*   Updated: 2023/12/06 20:33:02 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_first_value(char *combn, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		combn[i] = i + '0';
		i++;
	}
}

void	ft_print_combn(int n)
{
	int		i;
	int		j;
	char	combn[10];

	if (n <= 0 || n >= 10)
		return ;
	put_first_value(combn, n);
	while (1)
	{
		write(1, combn, n);
		if (combn[0] != '9' - n + 1)
			write(1, ", ", 2);
		i = n - 1;
		while (i >= 0 && combn[i] == '9' - n + i + 1)
			i--;
		if (i < 0)
			break ;
		combn[i]++;
		j = i + 1;
		while (j < n)
		{
			combn[j] = combn[i] + j - i;
			j++;
		}
	}
}
