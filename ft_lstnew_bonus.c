/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdiakit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:52:53 by abdiakit          #+#    #+#             */
/*   Updated: 2024/03/21 15:11:59 by abdiakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*aux;

	aux = (t_list *)malloc(sizeof(t_list));
	if (!aux)
	{
		return (NULL);
	}
	aux->content = content;
	aux->next = NULL;
	return (aux);
}
