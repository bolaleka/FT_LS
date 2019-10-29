/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 12:22:25 by event             #+#    #+#             */
/*   Updated: 2019/06/14 16:23:57 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	unsigned char	*str2;
	int				i;
	int				j;

	str2 = (unsigned char *)s2;
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (str2[j] != '\0')
	{
		s1[i + j] = str2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}
