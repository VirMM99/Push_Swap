/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:53:13 by vimirand          #+#    #+#             */
/*   Updated: 2025/12/12 11:49:21 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	*new_list = ft_lstnew("hola que tal");
// 	t_list	*new_list2 = ft_lstnew("whats up");
// 	t_list	*new_list3 = ft_lstnew("yes yep yeah");
// 	t_list	*temp_list;

// 	new_list->next = new_list2;
// 	ft_lstadd_front(&new_list, new_list3);
// 	temp_list = new_list;

// 	while (temp_list != NULL)
// 	{
// 		printf("%s\n", (char *)temp_list->content);
// 		temp_list = temp_list->next;
// 	}
// }
