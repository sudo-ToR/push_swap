/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:01:41 by marvin            #+#    #+#             */
/*   Updated: 2021/08/25 14:45:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(int *stack_a, int *stack_b, int len_a, int len_b)
{
	int	i;

	i = 0;
	while (i < len_a && i < len_b)
	{
		printf("%11d | %-11d\n", stack_a[i], stack_b[i]);
		i++;
	}
	while (i < len_a)
		{
			printf("%11d |\n", stack_a[i]);
			i++;
		}
	while (i < len_b)
	{
		printf(" | %-24d\n", stack_b[i]);
		i++;
	}
	printf("%c\t%15c\n", 'a', 'b');
}