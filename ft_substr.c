/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdiakit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:59:32 by abdiakit          #+#    #+#             */
/*   Updated: 2024/03/21 11:41:21 by abdiakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*aux;

	i = 0;
	if (!s || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len == 0)
		return (ft_strdup(""));
	if (len > (ft_strlen(s + start)))
		len = ft_strlen(s + start);
	aux = (char *)malloc(sizeof(char) * (len + 1));
	if (!aux)
		return (NULL);
	while (len-- && *s)
	{
		aux[i] = s[start];
		i++;
		start++;
	}
	aux[i] = '\0';
	return (aux);
}
