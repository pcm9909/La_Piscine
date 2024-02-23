/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunpark <pcm9909@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 21:51:21 by chunpark          #+#    #+#             */
/*   Updated: 2023/12/22 02:01:26 by chunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof (char) * len);
	if (dest == NULL)
		return (NULL);
	else
		return (ft_strcpy(dest, src));
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*temp;

	i = 0;
	temp = (t_stock_str *)malloc(sizeof (t_stock_str) * (ac + 1));
	if (temp == NULL)
		return (NULL);
	while (i < ac)
	{
		temp[i].size = ft_strlen(av[i]);
		temp[i].str = av[i];
		temp[i].copy = ft_strdup(av[i]);
		i++;
	}
	temp[i].str = NULL;
	temp[i].copy = NULL;
	return (temp);
}
