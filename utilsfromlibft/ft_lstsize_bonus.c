/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:53:31 by vimirand          #+#    #+#             */
/*   Updated: 2026/01/09 17:50:49 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	t_list	*new_list = ft_lstnew("hola que tal");
// 	t_list	*new_list2 = ft_lstnew("whats up");
// 	t_list	*new_list3 = ft_lstnew("yes yep yeah");

// 	new_list->next = new_list2;
// 	new_list2->next = new_list3;
// 	//new_list3->next = new_list; se queda en bucle

// 	printf("%d\n", ft_lstsize(new_list));
// 	return (0);
// }