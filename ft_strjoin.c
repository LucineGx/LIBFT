/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaveria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 18:14:06 by lgaveria          #+#    #+#             */
/*   Updated: 2016/11/21 11:29:26 by lgaveria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;

	if ((ret = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))) == 0)
		return (0);
	ret = ft_strcpy(ret, s1);
	return (ft_strcat(ret, s2));
}
