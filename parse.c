/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:19:25 by vimirand          #+#    #+#             */
/*   Updated: 2025/12/17 17:48:45 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_if_numbers(t_list **stack_x, char **num)
{
	int	i;
	t_list	*insert_node;
	
	i = 0;
	if (num[i] == NULL) //si no hay numeros liberamos y mandamos mensaje de error
	{
		LIBERAR ARRAY(num); //Liberar array y hacer función para poder hacerlo
		write(1, "Error\n", 6); //imprimimos el error
	}
	while (num[i] != NULL)
	{
		insert_node = creamos nodo(ft);
		ft_lstadd_back(stack_x, insert_node); //insertar nodo al final
		i++;
	}
}

void	check_duplicates(t_list **stack_x)
{
	t_list	*current_stack;
	t_list	*compare;
	
	current_stack = *stack_x;
	while (current_stack != NULL && current_stack->next != NULL) // while sean diferentes de nulo
	{
		compare = current_stack->next; //Primero me igualas compare con el siguiente del stack que me dan de no
		while (compare != NULL) //mientras que compare sea diferente de nulo...
		{
			if(current_stack->content == compare->content) //si el contenido del stack = al compare
				write(1, "Error\n", 6); //Error por numeros duplicados
			compare = compare->next; // si no pues me igualas el compare al siguiente, para ir checkeando
		}
		current_stack = current_stack->next; //Y aquñi sigues igualando el stack al siguiente numero de la lista
	}
}