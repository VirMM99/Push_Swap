/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 11:30:55 by vimirand          #+#    #+#             */
/*   Updated: 2025/12/17 12:37:35 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// movements to be done with lists

// SWAP 
// Tengo stack_a->next que es que el primero de mi stack apunta al segundo
// me guardo en *node1 = stack_a(first)->next
// en el *node2 = second->next 
// enotnces el primero lo tenemos que igualar a la flecha del segundo 
// es decir: stack_a(first)->next = second->next
// y después igualammos el *node1 = second->next y el *node2 = stack_a(first)->next
// y hemos hecho el swap de los dos primeros!

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

void	push_it(t_list **dest, t_list **src)
{
	t_list *temp;
	
	if (!src || !*src) // Si no tienes nada almacenado. Obvio.
		return ; //Se pone así para que salga del programa. Es Void no devuelve nada
	temp = *src;
	*src = (*src)->next; //se pone paréntesis al puntero para indicar que es puntero del src
	temp->next = *dest;
	*dest = temp; // Guardamos en temp el src. Igualamos el src al second. en la second del temp mentemos el dest y ya igualamos el Dest al tmp que tiene el src original.
}

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