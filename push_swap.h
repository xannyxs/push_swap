/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/15 14:19:41 by xvoorvaa      #+#    #+#                 */
/*   Updated: 2021/09/20 18:19:28 by xvoorvaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

struct	s_main	{
	int	*all_numbers;
}		t_main;

int		main(int argc, char **argv);

void	print_sa(void);

void	print_sb(void);

void	print_ss(void);

int		ft_atoi(const char *str);

#endif