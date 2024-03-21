/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdiakit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:02:25 by abdiakit          #+#    #+#             */
/*   Updated: 2024/03/19 16:09:26 by abdiakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*aux;

	if (!s)
	{
		return (NULL);
	}
	aux = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!aux)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		aux[i] = f(i, s[i]);
		i++;
	}
	aux[i] = '\0';
	return (aux);
}
