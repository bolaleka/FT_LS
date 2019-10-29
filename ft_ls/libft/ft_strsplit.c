/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolaleka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 01:53:00 by bolaleka          #+#    #+#             */
/*   Updated: 2019/06/14 18:05:41 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_nb(char const *s, char c)
{
	size_t	i;
	int		nb_words;
	int		new_word;

	i = 0;
	nb_words = 0;
	new_word = 1;
	while (s[i])
	{
		if (new_word && s[i] != c)
		{
			nb_words++;
			new_word = 0;
		}
		if (s[i] == c)
			new_word = 1;
		i++;
	}
	return (nb_words);
}

static char	*next_word(char const *s, char c, size_t *start)
{
	size_t	l1;

	while (s[*start] == c)
		*start += 1;
	l1 = *start;
	while (s[*start])
	{
		if (s[*start] == c)
			break ;
		*start += 1;
	}
	return (ft_strsub(s, l1, *start - l1));
}

char		**ft_strsplit(char const *s, char c)
{
	int		count_words;
	char	**split;
	size_t	i;
	size_t	start;

	if (!s)
		return (NULL);
	count_words = word_nb(s, c);
	if (!(split = (char**)malloc(sizeof(char*) * (count_words + 1))))
		return (NULL);
	i = 0;
	start = 0;
	while (count_words--)
	{
		split[i] = next_word(s, c, &start);
		i++;
	}
	split[i] = NULL;
	return (split);
}
