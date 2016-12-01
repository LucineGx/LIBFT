/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaveria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 10:26:20 by lgaveria          #+#    #+#             */
/*   Updated: 2016/11/24 15:01:06 by lgaveria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newelem;

	if ((newelem = malloc(sizeof(t_list))) == 0)
		return (0);
	if (content == NULL)
	{
		newelem->content = NULL;
		newelem->content_size = 0;
	}
	else
	{
		newelem->content = (void *)content;
		newelem->content_size = content_size;
	}
	newelem->next = NULL;
	return (newelem);
}
