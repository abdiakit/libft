/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdiakit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:13:22 by abdiakit          #+#    #+#             */
/*   Updated: 2024/03/21 11:57:16 by abdiakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_split(char **ret, size_t size)
{
	size_t	i;

	if (!ret)
	{
		return ;
	}
	i = 0;
	while (i < size)
	{
		if (ret[i])
			free(ret[i]);
	}
	free(ret);
}

static int	count_word(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
		{
			count++;
		}
		s++;
	}
	return (count);
}

static char	**aux_split(char const *s, char c, char **ret)
{
	int		i;
	size_t	idx;
	size_t	start;

	i = 0;
	idx = 0;
	start = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			start = i;
		if ((i > 0 && s[i] == c && s[i - 1] != c) || (!s[i + 1] && s[i] != c))
		{
			ret[idx] = ft_substr(s, start, i - start + (s[i] != c));
			if (!ret[idx])
			{
				free_split(ret, idx);
				return (NULL);
			}
			idx++;
		}
		i++;
	}
	ret[idx] = NULL;
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**ret;

	if (!s)
	{
		return (NULL);
	}
	count = count_word(s, c);
	ret = (char **)malloc(sizeof(char *) * (count + 1));
	if (!ret)
	{
		return (NULL);
	}
	return (aux_split(s, c, ret));
}
