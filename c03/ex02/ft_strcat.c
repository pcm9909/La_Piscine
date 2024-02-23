/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <pcm9909@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:40:08 by chunpark          #+#    #+#             */
/*   Updated: 2023/12/10 01:05:34 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (dest[cnt] != '\0')
		cnt++;
	while (src[i] != '\0')
	{
		dest[cnt + i] = src[i];
		i++;
	}
	dest[cnt + i] = '\0';
	return (dest);
}
