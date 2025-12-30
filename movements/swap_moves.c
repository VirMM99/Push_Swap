/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:33:23 by vimirand          #+#    #+#             */
/*   Updated: 2025/12/30 17:43:25 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_this(t_list **stack_x)// doble puntero porque le paso la referencia de la LISTA
{
	t_list *node1;
	t_list *node2;

	if (!stack_x || !*stack_x || !(*stack_x)->next) //Se pone  ->next porque puede que te den UN solo valor (y necesitas al menos dos para poder mover)
		return ; //Se pone así para que salga del programa. Es Void no devuelve nada
	node1 = *stack_x;
	node2 = node1->next;
	node1->next = node2->next;
	node2->next = node1;
	*stack_x = node2; //Los nodes1 y 2 son el first y second position de los nodos del stack_x (a or b)y hacen de temp para poderhacer el intercambio de posiciones
}

void	s_a(t_list **a)
{
	if (!a || !*a || !(*a)->next)
		return ;
	swap_this(a);
	write (1, "sa\n", 3);
}
void	s_b(t_list **b)
{
	if (!b || !*b || !(*b)->next)
		return ;
	swap_this(b);
	write (1, "sb\n", 3);
}

void	s_s(t_list **a, t_list **b)
{
	int done;
	
	done = 0;
	if (a && *a && (*a)->next)
	{
		swap_this(a);
		done = 1;
	}
	if (b && *b && (*b)->next)
	{
		swap_this(b);
		done = 1;
	}
	if (done != 0) //No entiendo no sería si done = 1 y ya printeas??
		write(1, "ss\n", 3);
}
