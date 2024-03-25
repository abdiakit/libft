/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdiakit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:13:24 by abdiakit          #+#    #+#             */
/*   Updated: 2024/03/25 15:06:20 by abdiakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*aux;
	t_list	*new_list;

	aux = lst;
	temp = malloc(sizeof(t_list));
	if (!temp)
	{
		return (0);
	}
	new_list = temp;
	while (aux)
	{
		new_list->content = f(aux->content);
		new_list->next = malloc(sizeof(t_list));
		if (!new_list->next)
			ft_lstclear(&aux, del);
		aux = aux->next;
		new_list = new_list->next;
	}
	return (gon);
}
