/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check_args.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwkwon <gwon3892@student.42gyeongsan>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:24:01 by gwkwon            #+#    #+#             */
/*   Updated: 2023/12/10 20:27:07 by gwkwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	msg_error(void)
{
	write(2, "Error\n", 6);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_input(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0 && !('1' <= str[i] && str[i] <= '4'))
			return (0);
		if (i % 2 == 1 && (str[i] != 32))
			return (0);
		i++;
	}
	while (*str)
	{
		if (!(*str == 32) && !('1' <= *str && *str <= '4'))
			return (0);
		str++;
	}
	return (1);
}

int	check_input_pattern(char *argv)
{
	if (ft_strlen(argv) != 31 || !check_input(argv))
		return (0);
	else
		return (1);
}
