/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaveria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 18:22:21 by lgaveria          #+#    #+#             */
/*   Updated: 2016/12/01 14:21:39 by lgaveria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	size_t			len;
	char			*str;

	start = 0;
	while (ft_iswhitespace(s[start]))
		start++;
	if (start == ft_strlen(s))
	{
		if ((str = malloc(sizeof(char *))) == 0)
			return (0);
		str = "";
	}
	else
	{
		len = ft_strlen(s);
		len--;
		while (ft_iswhitespace(s[len]))
			len--;
		len = len - start;
		str = ft_strsub(s, start, len + 1);
	}
	return(str);
}
