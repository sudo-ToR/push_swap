/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoirot <lnoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:09:57 by lnoirot           #+#    #+#             */
/*   Updated: 2021/12/05 14:13:10 by lnoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_min(int nb, t_int_table *stack)
{
	if (nb == ft_min(stack))
		return (1);
	return (0);
}

int	is_max(int nb, t_int_table *stack)
{
	if (nb == ft_max(stack))
		return (1);
	return (0);
}

int	is_next_sorted(int index, t_int_table *stack)
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

int	is_next_sorted_rotate(t_int_table *stack)
{
	int	i;

	i = 0;
	while (is_next_sorted(i, stack) && i < stack->len)
		i++;
	if (i < stack->len / 2)
		return (1);
	return (0);
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
