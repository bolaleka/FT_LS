/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolaleka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:02:12 by bolaleka          #+#    #+#             */
/*   Updated: 2019/06/14 11:25:21 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*news;
	int		i;
	int		len;

	i = 0;
	if (!s)
		return (NULL);
	while (s[0] == ' ' || s[0] == '\t' || s[0] == '\n')
		s++;
	len = ft_strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	if (s[0] == '\0')
		return (ft_strnew(0));
	if (!(news = (char *)malloc(len + 1)))
		return (NULL);
	while (i < len)
	{
		news[i] = s[i];
		i++;
	}
	news[i] = '\0';
	return (news);
}
