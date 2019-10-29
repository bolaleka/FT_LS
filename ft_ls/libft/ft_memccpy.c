/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolaleka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 15:29:14 by bolaleka          #+#    #+#             */
/*   Updated: 2019/06/14 11:36:59 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char			nwc;
	unsigned char			*ndst;
	unsigned char			*nsrc;
	size_t					i;

	nwc = (unsigned char)c;
	ndst = (unsigned char *)dst;
	nsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ndst[i] = nsrc[i];
		if (nsrc[i] == nwc)
			return (ndst + i + 1);
		i++;
	}
	return (NULL);
}
