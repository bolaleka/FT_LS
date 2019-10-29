/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolaleka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:17:28 by bolaleka          #+#    #+#             */
/*   Updated: 2019/06/14 16:54:42 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*nws1;
	unsigned char	*nws2;
	int				i;

	nws1 = (unsigned char *)s1;
	nws2 = (unsigned char *)s2;
	i = 0;
	while (nws1[i] || nws2[i])
	{
		if (nws1[i] > nws2[i])
			return (1);
		if (nws1[i] < nws2[i])
			return (-1);
		i++;
	}
	return (0);
}
