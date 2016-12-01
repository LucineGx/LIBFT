/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaveria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:37:58 by lgaveria          #+#    #+#             */
/*   Updated: 2016/12/01 15:14:28 by lgaveria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		countchar(int n)
{
	int	count;

	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	count = 0;
	if (n < 0)
	{
		n = -n;
		count += 1;
	}
	while (n >= 1)
	{
		count += 1;
		n = n / 10;
	}
	return (count);
}

char	*putinchar(int n, char *ret, int i)
{
	if (n == -0)
		ret = "0";
	else if (n < 0)
	{
		ret[0] = '-';
		if (n == -2147483648)
		{
			ret[1] = '2';
			ret = putinchar(147483648, ret, i);
		}
		else
			ret = putinchar(-n, ret, i);
	}
	else
	{
		if (n > 9)
			ret = putinchar(n / 10, ret, i - 1);
		ret[i] = (n % 10) + 48;
	}
	return (ret);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		i;

	i = countchar(n);
	if ((ret = malloc(sizeof(char) * (i + 1))) == 0)
		return (0);
	ret[i] = '\0';
	ret = putinchar(n, ret, i - 1);
	return (ret);
}

int main()
{
	ft_putstr(ft_itoa(-2147483648));
	return (0);
}
