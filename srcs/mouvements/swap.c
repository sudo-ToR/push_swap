/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:59:05 by marvin            #+#    #+#             */
/*   Updated: 2021/09/13 16:32:44 by tor              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	d_swap(t_push_swap *main)
{
	int	tmp;

	if (main->a->len > 1)
	{
		tmp = main->a->table[0];
		main->a->table[0] = main->a->table[1];
		main->a->table[1] = tmp;
	}
	if (main->a->len > 1)
	{
		tmp = main->b->table[0];
		main->b->table[0] = main->b->table[1];
		main->b->table[1] = tmp;
	}
	printf("ss\n");
}

void	swap_a(t_push_swap *main)
{
	swap('a', main->a);
}

void	swap_b(t_push_swap *main)
{
	swap('b', main->b);
}

void	swap(char stack_name, t_int_table *stack)
{
	int	tmp;

	if (stack->len < 2)
		return;
	tmp = stack->table[0];
	stack->table[0] = stack->table[1];
	stack->table[1] = tmp;
	printf("s%c\n", stack_name);
}