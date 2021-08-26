/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:55:59 by marvin            #+#    #+#             */
/*   Updated: 2021/08/26 15:09:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	d_rotate(t_push_swap *main)
{
	int	first;
	int	size;

	first = main->a[0];
	size = main->len_a;
	up_one(main->a, main->len_a);
	(main->a)[size - 1] = first;
	first = main->b[0];
	size = main->len_b;
	up_one(main->b, main->len_b);
	(main->b)[size - 1] = first;
	printf("rr\n");
}

void	rotate(char stack_name, int *stack, int size)
{
	int	first;

	first = stack[0];
	up_one(stack, size);
	stack[size - 1] = first;
	printf("r%c\n", stack_name);
}