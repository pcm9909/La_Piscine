/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <pcm9909@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 23:25:09 by chunpark          #+#    #+#             */
/*   Updated: 2023/12/21 17:36:32 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{	
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	pdest_len;
	unsigned int	psrc_len;
	unsigned int	dest_len;
	unsigned int	idx;

	pdest_len = ft_strlen(dest);
	psrc_len = ft_strlen(src);
	dest_len = pdest_len;
	idx = 0;
	while (src[idx] != '\0' && (idx + dest_len + 1) < size)
	{
		dest[pdest_len] = src[idx];
		pdest_len++;
		idx++;
	}
	dest[pdest_len] = '\0';
	if (dest_len < size)
		return (psrc_len + dest_len);
	else
		return (psrc_len + size);
}
