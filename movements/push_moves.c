/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:49:07 by vimirand          #+#    #+#             */
/*   Updated: 2025/12/30 17:43:42 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	p_a(t_list **b, t_list **a) //pusheamos el TOP node de B a el top de A
{
	if (!b || !*b) // si no hay nada que podamos pushear de B salimos
		return ;
	push_it(a, b); // push_it(dest, src) dest es A y mandamos (src) desde B
	write (1, "pa\n", 3);
}
void	p_b(t_list **a, t_list **b) //pusheamos el TOP node de A a el top de B
{
	if (!a || !*a)
		return ;
	push_it(b, a);
	write (1, "pb\n", 3);
}

