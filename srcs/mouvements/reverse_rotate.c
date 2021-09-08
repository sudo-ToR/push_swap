/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 15:12:16 by marvin            #+#    #+#             */
/*   Updated: 2021/09/08 15:40:07 by tor              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_drotate(t_push_swap *main)
{
	int	last;

	last = main->a[main->len_a - 1];
	down_one(main->a, main->len_a);
	main->a[0] = last;
	last = main->b[main->len_b - 1];
	down_one(main->b, main->len_b);
	main->b[0] = last;
	printf("rrr\n");
}
void	r_rotate_a(t_push_swap *main)
{
	r_rotate('a', main->a, main->len_a);	
}

void	r_rotate_b(t_push_swap *main)
{
	r_rotate('b', main->b, main->len_b);	
}

void	r_rotate(char stack_name, int *stack, int size)
{
	int	last;

	last = stack[size - 1];
	down_one(stack, size);
	stack[0] = last;
	printf("rr%c\n", stack_name);
}