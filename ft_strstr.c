/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaveria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:08:07 by lgaveria          #+#    #+#             */
/*   Updated: 2016/11/10 17:23:47 by lgaveria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return ((char *)&str[i - j]);
			i += 1;
			j += 1;
		}
		i = i + 1 - j;
	}
	return (0);
}
