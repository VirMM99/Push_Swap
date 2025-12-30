/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_moves.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:01:14 by vimirand          #+#    #+#             */
/*   Updated: 2025/12/30 17:43:58 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_this(t_list **stack_x)
{
	t_list *node1;
	t_list *last_node;
	
	if (!stack_x || !*stack_x || !(*stack_x)->next) // Si no tienes nada almacenado. Obvio.
		return ;
	node1 = NULL; // mi nodo1 temp le meto el NULL 
	last_node = *stack_x; //y a mi last_node le meto el primer valor de stack, siendo estos los que se van a intercambiar
	while (last_node->next != NULL) // while mi last_node no llegue a NULL...
	{
		node1 = last_node; // Me vas igualando el node1 a el last_node por el que vaya pasando
		last_node = last_node->next; //y el last_node me lo igualas al siguiente
	}
	node1->next = NULL; //Cuando el node1 ya tenga el último valos del stack_x me igualas el siguiente al NULL (para acabarlo como en string a \0)
	last_node->next = *stack_x; // TENGO ALGUNA DUDA CON ESTE y el de abajo...
	*stack_x = last_node;
}

void	rr_a(t_list **a)
{
	if (!a || !*a || !(*a)->next)
		return ;
	reverse_rotate_this(a);
	write (1, "rra\n", 3);
}
void	rr_b(t_list **b)
{
	if (!b || !*b || !(*b)->next)
		return ;
	reverse_rotate_this(b);
	write (1, "rrb\n", 3);
}

void	r_r(t_list **a, t_list **b)
{
	int done;
	
	done = 0;
	if (a && *a && (*a)->next)
	{
		reverse_rotate_this(a);
		done = 1;
	}
	if (b && *b && (*b)->next)
	{
		reverse_rotate_this(b);
		done = 1;
	}
	if (done) //No entiendo no sería si done = 1 y ya printeas??
		write(1, "rrr\n", 3);
}