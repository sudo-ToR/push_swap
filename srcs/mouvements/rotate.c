/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:55:59 by marvin            #+#    #+#             */
/*   Updated: 2021/09/13 16:34:41 by tor              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	d_rotate(t_push_swap *main)
{
	int	first;
	int	size;

	first = main->a->table[0];
	size = main->a->len;
	up_one(main->a);
	(main->a->table)[size - 1] = first;
	first = main->b->table[0];
	size = main->b->len;
	up_one(main->b);
	(main->b->table)[size - 1] = first;
	printf("rr\n");
}

void	rotate_a(t_push_swap *main)
{
	rotate('a', main->a);
}

void	rotate_b(t_push_swap *main)
{
	rotate('b', main->b);
}

void	rotate(char stack_name, t_int_table *stack)
{
	int	first;

	if (!stack->len)
		return;
	first = stack->table[0];
	up_one(stack);
	stack->table[stack->len - 1] = first;
	printf("r%c\n", stack_name);
}