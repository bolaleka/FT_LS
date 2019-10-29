/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolaleka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 14:02:16 by bolaleka          #+#    #+#             */
/*   Updated: 2019/06/13 11:18:26 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*str;

	if (!(str = malloc(sizeof(*str))))
		return (NULL);
	else if (content == NULL)
	{
		str->content = NULL;
		str->content_size = 0;
	}
	else
	{
		if (!(str->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(str->content, content, content_size);
		str->content_size = content_size;
	}
	str->next = NULL;
	return (str);
}
