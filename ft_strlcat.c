/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaveria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 13:53:16 by lgaveria          #+#    #+#             */
/*   Updated: 2016/11/21 17:04:34 by lgaveria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t i;
	size_t j;

	i = ft_strlen(dest);
	j = 0;
	while (j < size - i - 1 && src[j])
	{
		dest[j + i] = src[j];
		j += 1;
	}
	if (size >= i)
		dest[i + j] = '\0';
	return (i + j);
}
