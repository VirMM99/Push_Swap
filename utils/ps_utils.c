/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimirand <vimirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 14:23:43 by vimirand          #+#    #+#             */
/*   Updated: 2026/01/09 18:11:47 by vimirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_the_list(t_list **list)
{
	t_list *temp;
	
	while (*list)
	{
		temp = *list;
		*list = (*list)->next;
		free(temp);
	}
	*list = NULL;
}

int	the_error(char *str, int return_value, t_list **stack)
{
	if (stack != NULL)
		free_the_list(stack);
	write(1, &str, 1);
	write(1, "\n", 1);
	exit (return_value); //exit porque queremos que salga del programa si hay error
}
void	free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
}
t_list	*ft_lstnew(int *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = *content;
	new_node->next = NULL;
	return (new_node);
}

void	ft_lstadd_back(t_list **stack_x, t_list *new_node)
{
	t_list	*last_node;

	if (!stack_x)
		return ;
	if (!new_node)
		return ;
	if (*stack_x == NULL)
	{
		*stack_x = new_node;
		return ;
	}
	last_node = ft_lstlast(*stack_x);
	last_node->next = new_node;
}

