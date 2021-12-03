/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   linkedlist.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 19:02:47 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/12/03 11:58:07 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_issorted(t_node *head)
{
	while (head->next != NULL)
	{
		if (head->value > head->next->value)
			return (false);
		head = head->next;
	}
	return (true);
}

void	new_node(t_node **head, int value, int tag)
{
	t_node	*new_node;
	t_node	*last_node;

	new_node = ft_calloc(sizeof(t_node), 1);
	if (!new_node)
		return ;
	last_node = *head;
	new_node->value = value;
	new_node->tag = tag;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
}