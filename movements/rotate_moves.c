/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:58:16 by vimirand          #+#    #+#             */
/*   Updated: 2025/12/30 17:44:18 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_it(t_list **stack_x)
{
	t_list *node1;
	t_list *last_node;
	
	if (!stack_x || !*stack_x || !(*stack_x)->next) // Si no tienes nada almacenado. Obvio.
		return ;
	node1 = *stack_x;//en el node1 guardo la primera posición de stack_x. 
	*stack_x = node1->next; // En stack_x guardo la siguiente posición(second)
	last_node = *stack_x; // y en last_node guardamos esa segunda posición para que a prtir de ahí hagamos el while.
	while (last_node->next!= NULL)
		last_node = last_node->next;// Hacemos while con last_node para llegar al último nodo que haya en el stack
	last_node->next = node1; //cuando ya tenemos el último nodo lo igualamos a node1 por que queremos que ese sea el último ahora
	node1->next = NULL; // y ya en el último nodo le decimos que el siguiente lo ponga con NULL (como cuando acabamos los strings con \0)
}

void	r_a(t_list **a)
{
	if (!a || !*a || !(*a)->next)
		return ;
	rotate_it(a);
	write (1, "ra\n", 3);
}
void	r_b(t_list **b)
{
	if (!b || !*b || !(*b)->next)
		return ;
	rotate_it(b);
	write (1, "rb\n", 3);
}

void	r_r(t_list **a, t_list **b)
{
	int done;
	
	done = 0;
	if (a && *a && (*a)->next)
	{
		rotate_it(a);
		done = 1;
	}
	if (b && *b && (*b)->next)
	{
		rotate_it(b);
		done = 1;
	}
	if (done) //No entiendo no sería si done = 1 y ya printeas??
		write(1, "rr\n", 3);
}
