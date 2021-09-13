/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:01:41 by marvin            #+#    #+#             */
/*   Updated: 2021/09/13 14:34:49 by tor              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_int_table *a, t_int_table *b)
{
	int	i;

	i = 0;
	while (i < a->len && i < b->len)
	{
		printf("%11d | %-11d\n", a->table[i], b->table[i]);
		i++;
	}
	while (i < a->len)
		{
			printf("%11d |\n", a->table[i]);
			i++;
		}
	while (i < b->len)
	{
		printf(" %12c %d\n", '|', b->table[i]);
		i++;
	}
	printf("%c\t%15c\n", 'a', 'b');
}