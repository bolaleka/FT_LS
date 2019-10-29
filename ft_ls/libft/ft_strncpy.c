/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 08:34:12 by event             #+#    #+#             */
/*   Updated: 2019/06/14 16:11:35 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	unsigned char	*nwsrc;
	size_t			i;

	nwsrc = (unsigned char *)src;
	i = 0;
	while (nwsrc[i] != '\0' && i < len)
	{
		dest[i] = nwsrc[i];
		i++;
	}
	while (i < len)
		dest[i++] = '\0';
	return (dest);
}
