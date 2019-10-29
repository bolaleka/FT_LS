/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolaleka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 15:36:19 by bolaleka          #+#    #+#             */
/*   Updated: 2019/06/13 12:30:26 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newm;
	int		ls1;
	int		ls2;
	int		i;
	int		n;

	if (!s1 || !s2)
		return (NULL);
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	i = 0;
	n = 0;
	if (!(newm = (char *)malloc(ls1 + ls2 + 1)))
		return (NULL);
	while (i < ls1)
		newm[n++] = s1[i++];
	i = 0;
	while (i < ls2)
	{
		newm[n + i] = s2[i];
		i++;
	}
	newm[n + i] = '\0';
	return (newm);
}
