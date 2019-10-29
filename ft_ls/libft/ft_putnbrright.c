/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrright.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolaleka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 20:03:07 by bolaleka          #+#    #+#             */
/*   Updated: 2019/08/13 20:55:09 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbrright(int nbr, size_t min_len)
{
	size_t		len;

	len = ft_nbrlen(nbr);
	if (len < min_len)
		ft_putspace(min_len - len);
	ft_putnbr(nbr);
}
