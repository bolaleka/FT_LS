/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 00:47:22 by event             #+#    #+#             */
/*   Updated: 2019/06/14 15:56:47 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	unsigned char	*newsrc;
	int				i;

	newsrc = (unsigned char *)src;
	i = 0;
	while (newsrc[i] != '\0')
	{
		dest[i] = newsrc[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
