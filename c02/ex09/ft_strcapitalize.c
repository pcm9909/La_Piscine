/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <pcm9909@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:52:54 by chunpark          #+#    #+#             */
/*   Updated: 2023/12/20 15:10:17 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	flag;
	int	i;

	flag = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (flag && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 'a' - 'A';
				flag = 0;
			}
			else if (!flag && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 'a' - 'A';
			else
				flag = 0;
		}
		else
			flag = 1;
		i++;
	}
	return (str);
}
