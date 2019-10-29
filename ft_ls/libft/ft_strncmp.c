/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolaleka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:19:29 by bolaleka          #+#    #+#             */
/*   Updated: 2019/06/12 14:32:28 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*nws1;
	unsigned char	*nws2;
	size_t			i;

	nws1 = (unsigned char *)s1;
	nws2 = (unsigned char *)s2;
	i = 0;
	while ((nws1[i] || nws2[i]) && i < n)
	{
		if (nws1[i] > nws2[i])
			return (1);
		if (nws1[i] < nws2[i])
			return (-1);
		i++;
	}
	return (0);
}
