/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disp_long_ls.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolaleka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 19:46:45 by bolaleka          #+#    #+#             */
/*   Updated: 2019/09/23 15:23:35 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		get_position_size(t_elem *file, int size[7], int *blocks)
{
	int	len;

	size[5] = 3;
	size[6] = 3;
	while (file)
	{
		size[0] = POS(ft_nbrlen(file->st_blocks), size[0]);
		size[1] = POS(ft_nbrlen(file->st_nlink), size[1]);
		size[2] = POS(ft_strlen(getpwuid(file->st_uid)->pw_name), size[2]);
		size[3] = POS(ft_strlen(getgrgid(file->st_gid)->gr_name), size[3]);
		if (!S_ISCHR(file->st_mode))
			len = ft_nbrlen(file->size);
		else
		{
			size[5] = POS(ft_nbrlen(major(file->st_rdev)), size[5]);
			size[6] = POS(ft_nbrlen(minor(file->st_rdev)), size[6]);
			len = size[5] + size[6] + 2;
		}
		size[4] = POS(len, size[4]);
		*blocks += file->st_blocks;
		file = file->next;
	}
	size[5] = POS(size[4] - size[6] - 1, size[5]);
	return (1);
}

int		make_lst(t_elem *lst, int flags)
{
	char	buff[5];
	int		size[7];
	int		blocks;
	int		first;

	ft_bzero(size, sizeof(size));
	blocks = 0;
	first = 1;
	get_position_size(lst, size, &blocks);
	while (lst)
	{
		get_file_perm(lst, size, flags);
		ft_putchar('\n');
		lst = lst->next;
	}
	return (1);
}

int		display_long_ls(t_elem *lst, int flags)
{
	char	buff[5];
	int		size[7];
	int		blocks;
	int		first;

	ft_bzero(size, sizeof(size));
	blocks = 0;
	first = 1;
	get_position_size(lst, size, &blocks);
	while (lst)
	{
		if (first == 1 && !(flags & FLAG_D))
		{
			ft_putstr("total ");
			ft_putnbr(blocks);
			ft_putchar('\n');
			first = 0;
		}
		get_file_perm(lst, size, flags);
		ft_putchar('\n');
		lst = lst->next;
	}
	return (1);
}

int		display_ls(t_elem **lst, int flags)
{
	get_sort(lst, flags);
	if (!(flags & FLAG_L))
		display_lst(*lst, flags);
	else
		display_long_ls(*lst, flags);
	return (1);
}

void	display_lst(t_elem *lst, int flags)
{
	int total;
	int first;

	total = 0;
	first = 1;
	block_size(lst, &total);
	while (lst)
	{
		if (first == 1 && flags & FLAG_S)
		{
			ft_putstr("total ");
			ft_putnbr(total);
			ft_putchar('\n');
			first = 0;
		}
		if (flags & FLAG_S && !(flags & FLAG_L))
		{
			ft_putnbr(lst->st_blocks);
			ft_putstr(" ");
		}
		ft_putstr(lst->name);
		ft_putchar('\n');
		lst = lst->next;
	}
}
