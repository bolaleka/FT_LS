/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolaleka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 11:29:10 by bolaleka          #+#    #+#             */
/*   Updated: 2019/09/23 15:23:10 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		main(int ac, char **av)
{
	int			i;
	int			flags;
	t_elem		*lst;
	int			num;

	if ((i = display_opts(ac, av, &flags)) == -1)
		return (1);
	av += i;
	ac -= i;
	lst = valid_file(av, ac, 1);
	num = (!lst ? 1 : 0);
	disp_all_content(lst, flags, (!num ? 1 : 2), ac);
	free_folder(&lst);
	return (0);
}
