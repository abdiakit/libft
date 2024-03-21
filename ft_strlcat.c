/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdiakit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:22:28 by abdiakit          #+#    #+#             */
/*   Updated: 2024/03/19 16:10:22 by abdiakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	size_t	i;
	size_t	len_t;

	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	len_t = len_d + len_s;
	if (size <= len_d)
	{
		return (len_s + size);
	}
	i = 0;
	while ((src[i] != '\0') && (len_d < size - 1))
	{
		dest[len_d] = src[i];
		len_d++;
		i++;
	}
	dest[len_d] = '\0';
	return (len_t);
}
