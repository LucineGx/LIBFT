/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaveria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 18:16:59 by lgaveria          #+#    #+#             */
/*   Updated: 2016/11/30 18:20:15 by lgaveria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int signe;
	int nb;

	i = 0;
	signe = 1;
	nb = 0;
	while (!(ft_isprint(str[i])) || str[i] == ' ')
		i += 1;
	if (!(str[i] == '-' || str[i] == '+' || (str[i] >= '0' && str[i] <= '9')))
		return (0);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -1;
		i += 1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i += 1;
	}
	return (signe * nb);
}
