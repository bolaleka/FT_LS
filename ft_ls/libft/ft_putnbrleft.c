/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrleft.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolaleka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 20:55:35 by bolaleka          #+#    #+#             */
/*   Updated: 2019/08/13 20:59:05 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbrleft(int nbr, size_t min_len)
{
	size_t		len;

	len = ft_nbrlen(nbr);
	ft_putnbr(nbr);
	if (len < min_len)
		ft_putspace(min_len - len);
}
