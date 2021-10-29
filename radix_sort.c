/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   radix_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 14:53:48 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/10/29 15:15:37 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
	I will need to use Radix Sort, but I will not show it "On screen".
	It will be done in the background. Make a new list and use the "INT TAGS".
	Every number will be sorted and get a tag at the end from 0 - MAX OF ARGC.
	I will bring back every number to its original position with a tag on it.
	With these tags I will sort in stack_a & stack_b.

	EXAMPLE:
	VALUE -> 12 11 09 13 06
	TAGS  -> 03 02 01 04 00

*/

void	pre_sort(t_node **head_a, int argc, int divide)
{
	int		i;
	int		j;
	int		result;
	t_node	*head_b;

	i = 0;
	j = 0;
	result = 0;
	head_b = NULL;
	while (i <= 9)
	{
		while (j <= argc && *head_a != NULL)
		{
			result = (*head_a)->value / divide % 10;
			printf("J: %d I: %d\n", j, i);
			if (result == i)
				background_pb(head_a, &head_b);
			else
				background_ra(head_a);
			j++;
		}
		j = 0;
		i++;
	}
	printf("RESULT:\n");
	print_list(head_b);
	if (divide <= 100)
		pre_sort(&head_b, argc, divide * 10);
}

void	tag_sort(t_node **stack_a, int argc)
{
	t_node	*new_list;
	t_node	*tag_list;

	new_list = *stack_a;
	tag_list = NULL;
	while (new_list != NULL)
	{
		new_node(&tag_list, new_list->value);
		new_list = new_list->next;
	}
	pre_sort(&tag_list, argc, 1);
}

void	algorithm_radix(t_node **stack_a, t_node **stack_b, int argc)
{
	tag_sort(stack_a, argc);
	stack_b = stack_a;
}