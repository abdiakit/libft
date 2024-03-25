/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdiakit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:21:34 by abdiakit          #+#    #+#             */
/*   Updated: 2024/03/25 12:30:24 by abdiakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*iteri;

	if (*lst)
	{
		iteri = *lst;
		while (iteri->next != NULL)
		{
			iteri = iteri->next;
		}
		iteri->next = new;
	}
	else
		*lst = new;
}
