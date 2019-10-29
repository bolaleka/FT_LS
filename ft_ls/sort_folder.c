/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_folder.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolaleka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 19:55:20 by bolaleka          #+#    #+#             */
/*   Updated: 2019/09/17 14:52:48 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_elem				*lst_swap(t_elem *p1, t_elem *p2)
{
	p1->next = p2->next;
	p2->next = p1;
	return (p2);
}

static t_elem		*q_sort(t_elem *lst)
{
	if (!lst)
		return (NULL);
	if (lst->next && ft_strcmp(lst->name, lst->next->name) > 0)
		lst = lst_swap(lst, lst->next);
	lst->next = q_sort(lst->next);
	if (lst->next && ft_strcmp(lst->name, lst->next->name) > 0)
	{
		lst = lst_swap(lst, lst->next);
		lst->next = q_sort(lst->next);
	}
	return (lst);
}

static t_elem		*sort_time(t_elem *lst)
{
	if (!lst)
		return (NULL);
	if (lst->next && (lst->time < lst->next->time))
		lst = lst_swap(lst, lst->next);
	else if (lst->next && lst->time == lst->next->time)
		if (lst->next && (lst->ntime < lst->next->ntime))
			lst = lst_swap(lst, lst->next);
	lst->next = sort_time(lst->next);
	if (lst->next && (lst->time < lst->next->time))
	{
		lst = lst_swap(lst, lst->next);
		lst->next = sort_time(lst->next);
	}
	else if (lst->next && lst->time == lst->next->time)
	{
		if (lst->next && (lst->ntime < lst->next->ntime))
		{
			lst = lst_swap(lst, lst->next);
			lst->next = sort_time(lst->next);
		}
	}
	return (lst);
}

static t_elem		*sort_size(t_elem *lst)
{
	if (!lst)
		return (NULL);
	if (lst->next && (lst->size < lst->next->size))
		lst = lst_swap(lst, lst->next);
	lst->next = sort_size(lst->next);
	if (lst->next && (lst->size < lst->next->size))
	{
		lst = lst_swap(lst, lst->next);
		lst->next = sort_size(lst->next);
	}
	return (lst);
}

int					get_sort(t_elem **begin, short flags)
{
	*begin = q_sort(*begin);
	if (flags & FLAG_T)
		*begin = sort_time(*begin);
	if (flags & FLAG_BS)
		*begin = sort_size(*begin);
	if (flags & FLAG_R)
		*begin = rev_lst(*begin);
	return (1);
}
