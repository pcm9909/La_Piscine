/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <pcm9909@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:57:36 by chunpark          #+#    #+#             */
/*   Updated: 2023/12/15 22:42:03 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_unsigned(char c)
{
	char			*hex;
	unsigned char	uc;

	hex = "0123456789abcdef";
	uc = (unsigned char)c;
	write (1, "\\", 1);
	write (1, &hex[uc / 16], 1);
	write(1, &hex[uc % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i++], 1);
		else
		{
			print_unsigned(str[i]);
			i++;
		}
	}
}
