/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrleft.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolaleka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 20:59:20 by bolaleka          #+#    #+#             */
/*   Updated: 2019/08/13 22:44:28 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrleft(const char *s, size_t min_len)
{
	size_t		len;

	len = ft_strlen(s);
	ft_putstr(s);
	if (len < min_len)
		ft_putspace(min_len - len);
}
