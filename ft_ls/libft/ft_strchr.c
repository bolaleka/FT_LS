/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolaleka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:45:47 by bolaleka          #+#    #+#             */
/*   Updated: 2019/06/14 16:53:24 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		counter;
	char	new_c;

	new_c = (char)c;
	counter = ft_strlen(s) + 1;
	while (counter > 0)
	{
		if (*s != new_c)
			counter--;
		if (*s == new_c)
			return ((char *)s);
		s++;
	}
	return (0);
}
