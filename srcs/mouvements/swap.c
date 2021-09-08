/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:59:05 by marvin            #+#    #+#             */
/*   Updated: 2021/09/08 15:35:25 by tor              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	d_swap(t_push_swap *main)
{
	int	tmp;

	if (main->len_a > 1)
	{
		tmp = main->a[0];
		main->a[0] = main->a[1];
		main->a[1] = tmp;
	}
	if (main->len_a > 1)
	{
		tmp = main->b[0];
		main->b[0] = main->b[1];
		main->b[1] = tmp;
	}
	printf("ss\n");
}

void	swap_a(t_push_swap *main)
{
	swap('a', main->a, main->len_a);
}

void	swap_b(t_push_swap *main)
{
	swap('b', main->b, main->len_b);
}

void	swap(char stack_name, int *stack, int len)
{
	int	tmp;

	if (len < 2)
		return;
	tmp = stack[0];
	stack[0] = stack[1];
	stack[1] = tmp;
	printf("s%c\n", stack_name);
}