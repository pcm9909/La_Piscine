/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <pcm9909@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:04:39 by chunpark          #+#    #+#             */
/*   Updated: 2023/12/19 01:33:51 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	cnt;
	unsigned int	i;

	cnt = 0;
	i = 0;
	while (dest[cnt] != '\0')
		cnt++;
	while (src[i] != '\0' && i + 1 <= nb)
	{
		dest[cnt + i] = src[i];
		i++;
	}
	dest[cnt + i] = '\0';
	return (dest);
}
