/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdiakit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:52:31 by abdiakit          #+#    #+#             */
/*   Updated: 2024/03/26 10:40:19 by abdiakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*next_n;

	if (!*lst)
	{
		return ;
	}
	temp = *lst;
	while (temp != NULL)
	{
		next_n = temp->next;
		del(temp->content);
		free(temp);
		temp = next_n;
	}
	*lst = NULL;
}
