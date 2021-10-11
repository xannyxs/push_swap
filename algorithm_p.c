/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   algorithm_p.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/09 23:45:50 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/10/11 20:23:15 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
	Carful noet linking it in the wrong way.
	Stack_a and Stack_b can easily be linked to eachother.
	The whole algorithm won't work if they are linked to eachother.

	action_pb() is the first time I will use it.
	That is why I use new_node for the first time
	and using malloc() there.
*/

void	print_pa(void)
{
	write(1, "pa", 2);
	write(1, "\n", 2);
}

void	action_pa(t_node **stack_a, t_node **stack_b)
{
	int		data;
	t_node	*temp;
	t_node	*new_list;

	new_list = malloc(sizeof(t_node));
	data = (*stack_b)->value;
	temp = (*stack_b)->next;
	new_list->value = data;
	new_list->next = *stack_a;
	*stack_a = new_list;
	temp = (*stack_b)->next;
	(*stack_b) = temp;
	print_pa();
	print_list(*stack_a);
}

void	print_pb(void)
{
	write(1, "pb", 2);
	write(1, "\n", 2);
}

void	action_pb(t_node **stack_a, t_node **stack_b)
{
	int 	data;
	t_node	*temp;

	data = (*stack_a)->value;
	new_node(stack_b, data);
	temp = (*stack_a)->next;
	*stack_a = temp;
	print_pb();
	print_list(*stack_b);
}
