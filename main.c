/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaveria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 10:20:46 by lgaveria          #+#    #+#             */
/*   Updated: 2016/11/21 14:14:13 by lgaveria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//STRCAT
/*int		main(int ac, char **av)
{
	int i;
	char *dest;

	i = 0;
	dest = malloc(sizeof(char) * (ft_strlen(av[1]) + ft_strlen(av[2]) + 1));
	while (av[1][i])
	{
		dest[i] = av[1][i];
		i += 1;
	}
	dest[i] = '\0';
	ft_putstr(ft_strcat(dest, av[2]));
	return (0);
}*/

//STRCMP
/*int		main(int ac, char **av)
{
	ft_putnbr(ft_strcmp(av[1], av[2]));
	return (0);
}*/

//STRCPY
/*int		main(int ac, char **av)
{
	int i;
	char *dest;

	i = 0;
	dest = malloc(sizeof(char) * ft_strlen(av[2]) + 1);
	while (av[1][i])
	{
		dest[i] = av[1][i];
		i += 1;
	}
	dest[i] = '\0';
	ft_putstr(ft_strcpy(dest, av[2]));
	return (0);
}*/

//STRDUP
/*int		main(int ac, char **av)
{
	ft_putstr(ft_strdup(av[1]));
	return (0);
}*/

//STRLCAT
/*int		main(int ac, char **av)
{
	char *str1;
	char *str2;
	int size;


	str1 = ft_strdup(av[1]);
	str2 = ft_strdup(av[2]);
	size = ft_atoi(av[3]);

	printf("%zu\n",ft_strlcat(str1, str2, ft_strlen(str1) + size));
	str1 = ft_strdup(av[1]);
	printf("%zu", strlcat(str1, str2, ft_strlen(str1) + size));
	return (0);
}*/

//STRCHR
/*int main(int ac, char **av)
{
	ft_putstr(ft_strchr(av[1], atoi(av[2])));
	ft_putchar('\n');
	ft_putstr(strchr(av[1], atoi(av[2])));
	return 0;
}*/

//STRSTR
/*int		main(int ac, char **av)
{
	ft_putstr(ft_strstr(av[1], av[2]));
	ft_putchar('\n');
	ft_putstr(strstr(av[1], av[2]));
	return (0);
}*/

//ATOI
/*int		main(int ac, char **av)
{
	ft_putnbr(ft_atoi(av[1]));
	ft_putchar('\n');
	ft_putnbr(atoi(av[1]));
	return (0);
}*/

//IS?
/*int		main(int ac, char **av)
{
	int c;

	c = ft_atoi(av[1]);
	if (ft_isalpha(c) == 1)
		ft_putstr("alpha");
	if (ft_isdigit(c) == 1)
		ft_putstr("digit");
	if (ft_isalnum(c) == 1)
		ft_putstr("alnum");
	if (ft_isascii(c) == 1)
		ft_putstr("ascii");
	if (ft_isprint(c) == 1)
		ft_putstr("print");
	return (0);
}*/

//ITOA
int		main()
{
	printf("%s", ft_itoa(-1234567890));
	return(0);
}
