/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <pcm9909@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:43:00 by chunpark          #+#    #+#             */
/*   Updated: 2023/12/20 20:43:13 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	total_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	cnt;

	i = 0;
	j = 0;
	cnt = 0;
	while (i < size)
	{
		while (strs[i][j] != '\0')
		{
			cnt++;
			j++;
		}
		j = 0;
		i++;
	}
	cnt = cnt + ft_strlen(sep) * (size - 1);
	return (cnt);
}

char	*my_strcat(char *dest, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		while (strs[i][j] != '\0')
			dest[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
			dest[k++] = sep[j++];
		i++;
		j = 0;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*dest;

	len = total_len(size, strs, sep);
	if (size == 0)
	{
		dest = (char *)malloc(1);
		if (dest != NULL)
			dest[0] = '\0';
	}
	else
	{
		dest = (char *)malloc(len + 1);
		if (dest != NULL)
		{
			dest = my_strcat(dest, strs, sep, size);
			dest[len] = '\0';
		}
	}
	return (dest);
}
