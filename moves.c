/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 11:30:55 by vimirand          #+#    #+#             */
/*   Updated: 2025/12/16 17:32:36 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// movements to be don with lists

// SWAP 
// Tengo stack_a->next que es que el primero de mi stack apunta al segundo

// me guardo en *node1 = stack_a(first)->next
// en el *node2 = second->next 
// enotnces el primero lo tenemos que igualar a la flecha del segundo 
// es decir: stack_a(first)->next = second->next
// y después igualammos el *node1 = second->next y el *node2 = stack_a(first)->next
// y hemos hecho el swap de los dos primeros!

void	swap_nodes(t_list **stack_x)// doble puntero porque le paso la referencia de la LISTA
{
	t_list *node1;
	t_list *node2;

	if (!stack_x || !*stack_x || !(*stack_x)->next) //Se pone  ->next porque puede que te den UN solo valor (y necesitas al menos dos para poder mover)
		return ; //Se pone así para que salga del programa. es Void no devuelve nada
	node1 = *stack_x;
	node2 = node1->next;
	node1->next = node2->next;
	node2->next = node1;
	*stack_x = node2; //Los nodes1 y 2 son el first y second position de los nodos del stack_x (a or b)y hacen de temp para poderhacer el intercambio de posiciones
}

void	push_nodes(t_list **dest, t_list **src)
{
	t_list *temp;
	
	if (!src || !*src) // Si no tienes nada almacenado. Obvio.
		return ;
	temp = *src;
	*src = (*src)->next; //se pone paréntesis al puntero para indicar que es puntero del src
	temp->next = *dest;
	*dest = temp; // Guardamos en temp el src. Igualamos el src al second. en la second del temp mentemos el dest y ya igualamos el Dest al tmp que tiene el src original.
}

void	rotate_nodes(t_list **stack_x)
{
	t_list *node1;
	t_list *last_node;
	
	if (!stack_x || !*stack_x || !(*stack_x)->next)
		return ;
	node1 = *stack_x;
	*stack_x = node1->next;
	last_node = *stack_x;
	while (last_node->next!= NULL)
		last_node = last_node->next;
	last_node->next = node1;
	node1->next = NULL;
	
}