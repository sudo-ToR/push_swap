/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 15:12:16 by marvin            #+#    #+#             */
/*   Updated: 2021/09/13 16:48:32 by tor              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_drotate(t_push_swap *main)
{
	int	last;

	last = last_in_table(main->a);
	down_one(main->a);
	main->a->table[0] = last;
	last = last_in_table(main->b);
	down_one(main->b);
	main->b->table[0] = last;
	printf("rrr\n");
}

void	r_rotate_a(t_push_swap *main)
{
	r_rotate('a', main->a);
}

void	r_rotate_b(t_push_swap *main)
{
	r_rotate('b', main->b);
}

void	r_rotate(char stack_name, t_int_table *stack)
{
	int	last;

	if (!stack->len)
		return ;
	last = last_in_table(stack);
	down_one(stack);
	(stack->table)[0] = last;
	printf("rr%c\n", stack_name);
}
