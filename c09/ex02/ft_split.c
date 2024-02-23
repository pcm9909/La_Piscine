/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <pcm9909@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 03:16:40 by chunpark          #+#    #+#             */
/*   Updated: 2023/12/21 18:45:21 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	cal_len(char *str, char *charset)
{
	int	sum;
	int	i;

	sum = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (check_charset(str[i], charset) == 1 && str[i] != '\0')
			i++;
		if (str[i] != '\0')
			sum++;
		while (check_charset(str[i], charset) == 0 && str[i] != '\0')
			i++;
	}
	return (sum);
}

char	*str_alloc(int len, char *str, int idx)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
		dest[i++] = str[idx++];
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		cnt;
	int		i;
	int		j;

	i = 0;
	cnt = -1;
	j = 0;
	strs = (char **)malloc(sizeof(char *) * (cal_len(str, charset) + 1));
	while (str[i] != '\0')
	{
		while (check_charset(str[i], charset) == 1 && str[i] != '\0')
			i++;
		while (cnt++ != -2 && check_charset(str[i], charset) == 0 && \
			str[i] != '\0')
			i++;
		if (cnt > 0)
		{
			strs[j++] = str_alloc(cnt, str, i - cnt);
			cnt = -1;
		}
	}
	strs[j] = NULL;
	return (strs);
}
