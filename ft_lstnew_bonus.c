/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:52:30 by vimirand          #+#    #+#             */
/*   Updated: 2025/12/12 11:50:02 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = (t_list *)malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);
}
/* int	main(void)
{
	t_list	*new_list = ft_lstnew("hola que tal");
	t_list	*new_list2 = ft_lstnew("whats up");
	t_list	*new_list3 = ft_lstnew("yes yep yeah");

	new_list->next = new_list2;
	new_list2->next = new_list3;

	printf("%s\n", (char *)new_list->content);
	printf("El Titulillo %s\n", (char *)new_list2->content);
	printf("El Titulillo %s\n", (char *)new_list3->content);
 	free(new_list);
	free(new_list2);
	free(new_list3); 
} */

// typedef struct s_game
// {
// 	char *nombre;
// 	int jugadores;
// 	char *instrucciones;
// 	size_t	tiempo;
// 	struct game ampliacion;
// }	t_game

// t_game *catan;

// catan->nombre = "Catan";
// catan->jugadores = 4;
// catan->tiempo = 90;
// catan->instrucciones = "Lo que sea";

/* 
t_list box1;

box1->next = *box2;
box2->next = *box3;

[box1]
content
next -------> [box2]
				content
				next -------> [box3]
								content
								NULL

										
box->content;
 */