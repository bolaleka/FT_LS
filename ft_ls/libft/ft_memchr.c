/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 11:52:03 by event             #+#    #+#             */
/*   Updated: 2019/06/14 15:46:01 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int d, size_t n)
{
	unsigned char	*nws;
	unsigned char	c;
	size_t			i;

	nws = (unsigned char *)s;
	c = (unsigned char)d;
	i = 0;
	while (i < n)
	{
		if (*nws != c)
			i++;
		else
			return (nws);
		nws++;
	}
	return (NULL);
}
