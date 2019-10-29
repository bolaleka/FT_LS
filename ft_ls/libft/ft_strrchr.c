/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolaleka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 13:45:44 by bolaleka          #+#    #+#             */
/*   Updated: 2019/06/14 16:54:10 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	char	nwc;

	nwc = (char)c;
	j = ft_strlen(s);
	i = 0;
	while (j >= i)
	{
		if (s[j] == nwc)
			return ((char *)&s[j]);
		j--;
	}
	return (NULL);
}
