/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:57:19 by tor               #+#    #+#             */
/*   Updated: 2021/12/05 12:09:59 by tor              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_min(int nb, t_int_table *stack)
{
	if (nb == ft_min(stack))
		return (1);
	return (0);	
}

int		is_max(int nb, t_int_table *stack)
{
	if (nb == ft_max(stack))
		return (1);
	return (0);
}

int		is_next_sorted(int index, t_int_table *stack)
{
	int	i;
	int	j;

	if (index > stack->len)
		return (0);
	i = stack->table[index];
	if (index == stack->len - 1)
		j = stack->table[0];
	else
		j = stack->table[index + 1];
	if (is_min(j, stack) && is_max(i, stack))
		return (1);
	if (is_min(i, stack) && is_max(j, stack))
		return (0);
	if (i < j)
		return (1);
	return (0);
}

int		is_next_sorted_rotate(t_int_table *stack)
{
	int	i;

	i = 0;
	while (is_next_sorted(i, stack) && i < stack->len)
		i++;
	if (i < stack->len / 2)
		return (1);
	return (0);
}

void	sorting_little(t_push_swap *main)
{
	if (is_max(main->a->table[0], main->a) && is_min(last_in_table(main->a), main->a))
	{
		r_rotate_a(main);
		swap_a(main);
	}
	if (!is_next_sorted(0, main->a))
		swap_a(main);
	while (!is_sorted_in_circle_decres(main->a))
	{
		if (last_in_table(main->a) > main->a->table[0] && !is_next_sorted(main->a->len - 1, main->a)
			&& !is_max(last_in_table(main->a), main->a))
		{
				r_rotate_a(main);
				swap_a(main);
		}
		else if (!is_bigger(main->a->table[0], main->a->table[1]) && !is_next_sorted(0, main->a))
			swap_a(main);
		else
		{
			while (is_next_sorted(0, main->a) && !is_sorted_in_circle_decres(main->a))
				rotate_a(main);
		}
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
	if (i <= stack->len / 2)
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

void	sorting_big_sample(t_push_swap *main)
{
	int	tmp;
	int	r_shift;
	int	nb_bits;

	nb_bits = 3;
	main->size_sample++;
	while (main->size_sample >> nb_bits)
		nb_bits++;
	r_shift = -1;
	while (++r_shift < nb_bits /*&& !is_sorted_in_circle_decres(main->a)*/)
	{
		tmp = main->size_sample;
		while (--tmp)
		{
			if (((main->a->table[0] >> r_shift) & 1))
				rotate_a(main);
			else
				push_b(main);
		}
		while (main->b->len)
			push_a(main);
	}
}

void	sorting_a(t_push_swap *main)
{	
	if (main->a->len <= 5)
		sorting_little(main);
	else
		sorting_big_sample(main);
	put_min_first('a', main->a);
}
