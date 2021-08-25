/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:59:05 by marvin            #+#    #+#             */
/*   Updated: 2021/08/25 14:52:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	d_swap(int *a, int *b)
{
	int	tmp;

	tmp = a[0];
	a[0] = a[1];
	a[1] = tmp;
	tmp = b[0];
	b[0] = b[1];
	b[1] = tmp;
	printf("ss\n");
}

void	swap(char stack_name, int *stack)
{
	int	tmp;

	tmp = stack[0];
	stack[0] = stack[1];
	stack[1] = tmp;
	printf("s%c\n", stack_name);
}