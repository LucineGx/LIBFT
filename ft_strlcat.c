/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaveria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 13:53:16 by lgaveria          #+#    #+#             */
/*   Updated: 2016/11/29 20:04:41 by lgaveria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t ld;
	size_t ls;

	ld = strlen(dest);
	ls = strlen(src);
	if (ld >= size)
		return (size + ls);
	strncat(dest, src, size - ld - 1);
	if (ls + ld + 1 > size)
		return (ls + ld);
	return (ls + strlen(dest));
}
