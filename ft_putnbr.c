/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaveria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 11:26:08 by lgaveria          #+#    #+#             */
/*   Updated: 2016/11/21 16:00:41 by lgaveria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		if (n == -2147483648)
		{
			ft_putchar('2');
			ft_putnbr(147483648);
		}
		else
			ft_putnbr(-n);
	}
	else
	{
		if (n > 9)
			ft_putnbr(n / 10);
		ft_putchar((n % 10) + 48);
	}
}
