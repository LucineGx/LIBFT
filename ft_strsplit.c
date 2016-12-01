/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaveria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 19:22:09 by lgaveria          #+#    #+#             */
/*   Updated: 2016/12/01 16:36:34 by lgaveria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int		ctwords(char const *s, char delim)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] == delim)
		i += 1;
	while (s[i])
	{
		count += 1;
		while (s[i] != delim)
			i += 1;
		while (s[i] == delim)
			i += 1;
	}
	return (count);
}

static int		ctletters(char const *s, char delim)
{
	int	count;

	count = 0;
	while (s[count] != delim)
		count += 1;
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**ret;
	int		i;
	int		j;
	int		k;

	if ((ret = malloc(sizeof(char *) * ctwords(s, c))) == 0)
		return (0);
	k = -1;
	i = 0;
	while (s[++k])
	{
		if (s[k] != c)
		{
			j = 0;
			if ((ret[i] = malloc(sizeof(char) * ctletters(&s[k], c)) + 1) == 0)
				return (0);
			k -= 1;
			while (s[++k] != c && s[k])
				ret[i][j++] = s[k];
			ret[i][j] = '\0';
			i += 1;
		}
	}
	return (ret);
}
