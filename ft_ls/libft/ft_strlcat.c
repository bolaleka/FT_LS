/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolaleka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:09:41 by bolaleka          #+#    #+#             */
/*   Updated: 2019/06/14 16:50:29 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	const char	*new_src;
	size_t		i;
	size_t		j;

	new_src = (const char *)src;
	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	while (new_src[j] != '\0' && i + j + 1 < dstsize)
	{
		dst[i + j] = new_src[j];
		j++;
	}
	if (i < dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(new_src));
}
