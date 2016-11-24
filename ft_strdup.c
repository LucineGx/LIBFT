/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaveria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 11:41:16 by lgaveria          #+#    #+#             */
/*   Updated: 2016/11/10 11:44:20 by lgaveria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	if ((dest = malloc(sizeof(char) * ft_strlen(s) + 1)) == 0)
		return (0);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i += 1;
	}
	dest[i] = '\0';
	return (dest);
}
