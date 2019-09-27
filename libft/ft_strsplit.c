/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 19:37:02 by lrorscha          #+#    #+#             */
/*   Updated: 2019/05/26 21:45:00 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(const char *ss, char c)
{
	int count;
	int i;

	i = 0;
	count = 0;
	if (ss == NULL)
		return (0);
	while (ss[i])
	{
		if (ss[i] == c && ss[i + 1] != c)
			count++;
		i++;
	}
	if (ss[0] != '\0')
		count++;
	return (count);
}

static char		*ft_word(const char *ss, char c, int *i)
{
	char*s;
	int	g;

	s = ft_strnew(ft_strlen(ss));
	if (s == NULL)
		return (NULL);
	g = 0;
	while (ss[*i] != c && ss[*i])
	{
		s[g] = ss[*i];
		g++;
		*i += 1;
	}
	s[g] = '\0';
	while (ss[*i] == c && ss[*i])
		*i += 1;
	return (s);
}

char			**ft_strsplit(char const *s, char c)
{
	char**ss;
	int	i;
	int j;
	int word;

	if (s == NULL)
		return (NULL);
	word = ft_count(s, c);
	ss = (char**)malloc(sizeof(ss) * (word + 2));
	if (ss == NULL)
		return (0);
	i = 0;
	j = 0;
	while (s[i] == c && s[i])
		i++;
	while (j < word && s[i])
	{
		ss[j] = ft_word(s, c, &i);
		j++;
	}
	ss[j] = NULL;
	return (ss);
}
