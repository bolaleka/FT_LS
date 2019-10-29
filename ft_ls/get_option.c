/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_option.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolaleka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:01:18 by bolaleka          #+#    #+#             */
/*   Updated: 2019/09/17 15:13:42 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void		ft_readlink(t_elem *file)
{
	char buf[NAME_MAX];

	ft_bzero(buf, NAME_MAX + 1);
	readlink(file->full_path, buf, NAME_MAX);
	ft_putstr(file->name);
	ft_putstr(" -> ");
	ft_putstr(buf);
}

static int	opts_strchr(char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		++i;
	}
	return (-1);
}

int			get_opts(char *s, int *flags)
{
	int		n;

	while (*(++s))
	{
		if ((n = opts_strchr("alRrtdG1Ss", *s)) == -1)
			print_err(s, USAGE);
		*flags |= (1 << n);
		if ((*s == 'l') || (*s == '1'))
			*flags &= (*s == 'l') ? ~FLAG_1 : ~FLAG_L;
	}
	return (1);
}

int			display_opts(int ac, char **av, int *flags)
{
	int	i;

	*flags = 0;
	i = 0;
	while (++i < ac && av[i][0] == '-' && av[i][1])
	{
		if (av[i][1] == '-' && av[i][2])
			return (i + 1);
		if (!get_opts(av[i], flags))
			return (-1);
	}
	return (i);
}
