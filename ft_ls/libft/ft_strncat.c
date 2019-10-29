/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:46:58 by event             #+#    #+#             */
/*   Updated: 2019/06/14 16:26:46 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned char	*str2;
	size_t			i;
	size_t			j;

	str2 = (unsigned char *)s2;
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (str2[j] != '\0' && j < n)
	{
		s1[i + j] = str2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}
