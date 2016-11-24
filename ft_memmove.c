/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaveria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 19:33:12 by lgaveria          #+#    #+#             */
/*   Updated: 2016/11/21 17:07:20 by lgaveria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *tmp;

	ft_memcpy(tmp, src, n);
	ft_memcpy(dest, tmp, n);
	free(tmp);
	return (dest);
}
