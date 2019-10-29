/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolaleka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:06:22 by bolaleka          #+#    #+#             */
/*   Updated: 2019/06/14 16:29:07 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	j = 0;
	i = 0;
	if (!needle[i])
		return ((char *)haystack);
	while (haystack[j] != '\0')
	{
		while (needle[i] && needle[i] == haystack[j + i])
			i++;
		if (!needle[i])
		{
			return ((char *)&haystack[j]);
		}
		else
			i = 0;
		j++;
	}
	return (NULL);
}
