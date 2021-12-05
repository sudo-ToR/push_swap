/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoirot <lnoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:57:19 by tor               #+#    #+#             */
/*   Updated: 2021/12/05 14:13:14 by lnoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	need_sa_ra(t_push_swap *main)
{
	if (last_in_table(main->a) > main->a->table[0]
		&& !is_next_sorted(main->a->len - 1, main->a)
		&& !is_max(last_in_table(main->a), main->a))
		return (1);
	return (0);
}

int	need_sa(t_push_swap *main)
{
	if (!is_bigger(main->a->table[0], main->a->table[1])
		&& !is_next_sorted(0, main->a))
		return (1);
	return (0);
}

void	sorting_little(t_push_swap *main)
{
	if (is_max(main->a->table[0], main->a)
		&& is_min(last_in_table(main->a), main->a))
	{
		r_rotate_a(main);
		swap_a(main);
	}
	if (!is_next_sorted(0, main->a))
		swap_a(main);
	while (!is_sorted_in_circle_decres(main->a))
	{
		if (need_sa_ra(main))
		{
			r_rotate_a(main);
			swap_a(main);
		}
		else if (need_sa(main))
			swap_a(main);
		else
		{
			while (is_next_sorted(0, main->a)
				&& !is_sorted_in_circle_decres(main->a))
				rotate_a(main);
		}
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
	while (++r_shift < nb_bits)
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
