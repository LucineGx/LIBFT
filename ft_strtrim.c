/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaveria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 18:22:21 by lgaveria          #+#    #+#             */
/*   Updated: 2016/11/16 18:39:29 by lgaveria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlentrim(char const *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!(ft_iswhitespace(str[i])))
			count += 1;
		i += 1;
	}
	return (count);
}

char	*ft_strtrim(char const *s)
{
	char	*ret;
	int		i;
	int		j;

	if ((ret = malloc(sizeof(char) * ft_strlentrim(s) + 1)) == 0)
		return (0);
	i = 0;
	j = 0;
	while (s[j])
	{
		if (!(ft_iswhitespace(s[j])))
		{
			ret[i] = s[j];
			i += 1;
		}
		j += 1;
	}
	ret[i] = '\0';
	return (ret);
}
