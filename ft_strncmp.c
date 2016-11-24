/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaveria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:38:34 by lgaveria          #+#    #+#             */
/*   Updated: 2016/11/16 19:29:34 by lgaveria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i += 1;
	}
	if (i == n)
		return (0);
	else
		return (s1[i] - s2[i]);
}
