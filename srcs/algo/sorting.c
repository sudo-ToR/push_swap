/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:57:19 by tor               #+#    #+#             */
/*   Updated: 2021/09/14 16:47:51 by tor              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_little(t_push_swap *main)
{
	// int	i;

	while (!is_sorted_in_circle_decres(main->a))
	{
		if (!is_bigger(main->a->table[0], main->a->table[1]))
			swap_a(main);
		else if (last_in_table(main->a) > main->a->table[0])
		{
			r_rotate_a(main);
			swap_a(main);
		}
		while (main->a->table[0] < main->a->table[1] && !is_sorted_in_circle_decres(main->a))
			rotate_a(main);
	}
}	

void	put_min_first(char stack_name, t_int_table *stack)
{
	int		i;
	int		min;

	i = 0;
	min = ft_min(stack);
	while (stack->table[i] != min)
		i++;
	if (i < stack->len / 2)
	{
		while (stack->table[0] != min)
			rotate(stack_name, stack);
	}
	else
	{
		while (stack->table[0] != min)
			r_rotate(stack_name, stack);
	}
}

void	sorting_a(t_push_swap *main)
{
	// t_int_table	instruc_lst;
	
	if (main->a->len <= 5)
		sorting_little(main);
	put_min_first('a', main->a);
}