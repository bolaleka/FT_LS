/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 23:39:18 by event             #+#    #+#             */
/*   Updated: 2019/06/14 15:56:15 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new_s1;
	char	*dest;
	int		i;

	new_s1 = (char *)s1;
	i = 0;
	if (!(dest = (char *)malloc(ft_strlen(new_s1) + 1)))
		return (NULL);
	while (new_s1[i] != '\0')
	{
		dest[i] = new_s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
