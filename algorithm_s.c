/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   algorithm_s.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/15 18:50:00 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/09/22 13:06:27 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
	Maybe make this file only for S commands. I wil have to take a look.
	RN it is not really clean.
 */

void	action_sa(void)
{
	int	temp;

	temp = t_main.stack_a[0];
	t_main.stack_a[0] = t_main.stack_a[1];
	t_main.stack_a[1] = temp;
	write(1, "sa", 2);
	write(1, "\n", 2);
}

void	action_sb(void)
{
	int	temp;

	temp = t_main.stack_b[0];
	t_main.stack_b[0] = t_main.stack_b[1];
	t_main.stack_b[1] = temp;
	write(1, "sb", 2);
	write(1, "\n", 2);
}

void	action_ss(void)
{
	int	temp;

	temp = t_main.stack_a[0];
	t_main.stack_a[0] = t_main.stack_a[1];
	t_main.stack_a[1] = temp;
	temp = t_main.stack_b[0];
	t_main.stack_b[0] = t_main.stack_b[1];
	t_main.stack_b[1] = temp;
	write(1, "ss", 2);
	write(1, "\n", 2);
}
