/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolaleka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:20:03 by bolaleka          #+#    #+#             */
/*   Updated: 2019/06/14 16:35:01 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t i;
	size_t j;

	j = 0;
	i = 0;
	if (!n[i])
		return ((char *)&h[j]);
	while (h[j] && j < len)
	{
		while (n[i] && n[i] == h[j + i] && j < len)
		{
			if ((i + j) < len)
				i++;
			else
				return (NULL);
		}
		if (!n[i])
			return ((char *)&h[j]);
		else
			i = 0;
		j++;
	}
	return (NULL);
}
