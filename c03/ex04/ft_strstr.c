/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <pcm9909@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:48:46 by chunpark          #+#    #+#             */
/*   Updated: 2023/12/19 02:27:57 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (&str[i]);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			i++;
			j++;
			if (to_find[j] == '\0')
			{
				return (&str[i - j]);
			}
		}
		else
		{
			j = 0;
			i++;
		}
	}
	return (0);
}
