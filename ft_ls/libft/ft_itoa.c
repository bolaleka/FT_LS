/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolaleka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 09:02:48 by bolaleka          #+#    #+#             */
/*   Updated: 2019/06/13 16:36:16 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	n_len(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			s_len;
	unsigned int	n_num;

	s_len = n_len(n);
	n_num = n;
	if (n < 0)
	{
		n_num = -n;
		s_len++;
	}
	if (!(str = (char *)malloc(s_len)))
		return (NULL);
	str[s_len] = 0;
	str[--s_len] = n_num % 10 + '0';
	while (n_num /= 10)
		str[--s_len] = n_num % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
