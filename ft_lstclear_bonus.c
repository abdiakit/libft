/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdiakit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:52:31 by abdiakit          #+#    #+#             */
/*   Updated: 2024/03/25 14:00:20 by abdiakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!*lst)
	{
		return ;
	}
	temp = *lst;
	while (temp != NULL)
	{
		del(temp->content);
		free(temp);
		temp = temp->next;
	}
	*lst = NULL;
}
